__int64 __fastcall sub_7BBDE0(__int64 a1, __int8 *a2, __int64 *a3, __int64 a4, char a5)
{
  unsigned __int64 v8; // rax
  char *v9; // r14
  unsigned __int16 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // r15
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rbx
  void *v19; // rsi
  __int64 v20; // rdx
  char v21; // bl
  __int64 v22; // rdi
  __int64 v23; // r12
  unsigned __int16 v24; // bx
  char v25; // bl
  unsigned int v26; // ebx
  __int64 v28; // rbx
  __int64 v29; // r14
  unsigned __int64 v30; // r13
  _BYTE *v31; // rsi
  char *v32; // rbx
  __int64 v33; // rbx
  __int64 v34; // r12
  unsigned __int64 v35; // rbp
  char *v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rax
  char v39; // al
  unsigned int v40; // eax
  char v42; // [rsp+Fh] [rbp-B1h]
  __int64 v43[2]; // [rsp+10h] [rbp-B0h] BYREF
  unsigned __int64 v44; // [rsp+20h] [rbp-A0h] BYREF
  __int64 v45; // [rsp+28h] [rbp-98h] BYREF
  unsigned __int64 v46; // [rsp+30h] [rbp-90h] BYREF
  void *v47; // [rsp+38h] [rbp-88h] BYREF
  __int128 v48; // [rsp+40h] [rbp-80h]
  void *ptr; // [rsp+58h] [rbp-68h] BYREF
  __int128 v50; // [rsp+60h] [rbp-60h]
  char v51[9]; // [rsp+77h] [rbp-49h] BYREF
  unsigned __int64 v52; // [rsp+80h] [rbp-40h]

  v43[0] = a4;
  v52 = __readfsqword(0x28u);
  v48 = 0;
  v47 = nullptr;
  if ( sub_7B30F0((__int64 *)a1, a4, (__int64 *)&v47) <= 0 )
    goto LABEL_26;
  v8 = v48;
  v9 = (char *)haystack;
  if ( (_QWORD)v48 )
  {
    v9 = (char *)v47;
    v8 = v48 - 1;
  }
  v44 = v8;
  sub_7BEFF0(&v45, a2, v9, 0, 0);
  if ( v43[0] == v45 )
    goto LABEL_26;
  v10 = sub_7B3000(a1, v43[0], (__int64 *)&v46, 0, 1);
  if ( v10 )
  {
    v42 = 0;
    if ( v44 < v46 )
    {
      sub_7BEFF0(&ptr, a2, v10, v46, 0);
      v42 = 1;
      if ( (void *)v43[0] == ptr )
      {
LABEL_26:
        v26 = 1;
        goto LABEL_27;
      }
    }
  }
  else
  {
    v42 = 0;
  }
  v11 = a3[1];
  v12 = *a3;
  if ( a3[2] < (unsigned __int64)(v11 + 1) )
  {
    v37 = qvector_reserve(a3, v12, v11 + 1, 24);
    *a3 = v37;
    v11 = a3[1];
    v12 = v37;
  }
  v13 = v12 + 24 * v11;
  *(_QWORD *)v13 = 0;
  *(_OWORD *)(v13 + 8) = 0;
  ++a3[1];
  sub_35A790((char **)v13);
  if ( a5 )
  {
    if ( v45 == -1 )
    {
      v14 = v44;
      if ( v44 > 0x1FF )
      {
        v15 = sub_7B0540(*(_QWORD *)a1, (__int64)v51, v9, &v44, 1);
        v14 = v44;
        v9 = (char *)v15;
      }
      v16 = a1 + 1094;
      *(_WORD *)(a1 + 1091) = v14 + 1;
      memcpy((void *)(a1 + 1094), v9, v14);
      v18 = *(_QWORD *)a1;
      if ( *(_BYTE *)(*(_QWORD *)a1 + 6020LL) && (unsigned __int8)must_journal(v16, v9, v17) )
      {
        v50 = 0;
        ptr = nullptr;
        v39 = sub_73D2C0(v18, (unsigned __int16 *)(a1 + 1091), 8, v43, (__int64)&ptr);
        v19 = ptr;
        v21 = v39;
        add_undo_record(1, ptr, v50);
        if ( ptr )
        {
          *(_QWORD *)&v50 = 0;
          qfree(ptr);
        }
      }
      else
      {
        v19 = (void *)(a1 + 1091);
        v21 = sub_73D2C0(v18, (unsigned __int16 *)(a1 + 1091), 8, v43, 0);
      }
      if ( !v21 )
        sub_743130();
      if ( v42 )
      {
        if ( *(_QWORD *)(a1 + 8) )
        {
          v40 = v43[0];
          v22 = 6;
          *(_BYTE *)(a1 + 60) = 78;
          *(_WORD *)(a1 + 53) = 6;
          *(_DWORD *)(a1 + 56) = _byteswap_ulong(v40);
        }
        else
        {
          v19 = byte_9 + 1;
          v22 = v43[0];
          *(_WORD *)(a1 + 53) = 10;
          *(_QWORD *)(a1 + 56) = swap64(v22);
          *(_BYTE *)(a1 + 64) = 78;
        }
        v23 = *(_QWORD *)a1;
        v24 = v44;
        if ( *(_BYTE *)(*(_QWORD *)a1 + 6020LL) && (unsigned __int8)must_journal(v22, v19, v20) )
        {
          v50 = 0;
          ptr = nullptr;
          v25 = sub_73D2C0(v23, (unsigned __int16 *)(a1 + 53), v24, v9, (__int64)&ptr);
          add_undo_record(1, ptr, v50);
          if ( ptr )
          {
            *(_QWORD *)&v50 = 0;
            qfree(ptr);
          }
        }
        else
        {
          v25 = sub_73D2C0(v23, (unsigned __int16 *)(a1 + 53), v24, v9, 0);
        }
        if ( !v25 )
          sub_743130();
      }
    }
    else
    {
      v28 = v48;
      if ( (_QWORD)v48 )
      {
        v29 = v48 + 5;
        v30 = v48 + 6;
        v28 = v48 - 1;
      }
      else
      {
        v30 = 7;
        v29 = 6;
      }
      v31 = v47;
      if ( *((_QWORD *)&v48 + 1) < v30 )
      {
        v47 = (void *)qvector_reserve(&v47, v47, v30, 1);
        v31 = v47;
      }
      *(_QWORD *)&v48 = v30;
      v31[v29] = 0;
      v32 = (char *)v47 + v28;
      *((_WORD *)v32 + 2) = 25701;
      *(_DWORD *)v32 = 2020173407;
      sub_7BBC70(a1, a2, (__int64 *)&v47);
      sub_7B32E0(a1, v43[0], (char *)v47, ((_QWORD)v48 == 0) + (_QWORD)v48 - 1LL, 1);
    }
    v33 = *(_QWORD *)(v13 + 8);
    if ( v33 )
    {
      v34 = v33 + 7;
      v35 = v33 + 8;
      --v33;
    }
    else
    {
      v35 = 9;
      v34 = 8;
    }
    v36 = *(char **)v13;
    if ( *(_QWORD *)(v13 + 16) < v35 )
    {
      v38 = qvector_reserve(v13, v36, v35, 1);
      *(_QWORD *)v13 = v38;
      v36 = (char *)v38;
    }
    *(_QWORD *)(v13 + 8) = v35;
    v36[v34] = 0;
    *(_QWORD *)(*(_QWORD *)v13 + v33) = 0x64657869662E2E2ELL;
  }
  v26 = 0;
LABEL_27:
  if ( v47 )
  {
    *(_QWORD *)&v48 = 0;
    qfree(v47);
  }
  return v26;
}
