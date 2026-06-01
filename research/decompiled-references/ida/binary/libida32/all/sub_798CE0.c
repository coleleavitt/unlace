__int64 __fastcall sub_798CE0(__int64 a1, __int8 *a2, __int64 *a3, unsigned int a4, char a5)
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
  __int64 v19; // rdi
  __int64 v20; // rdx
  char v21; // bl
  unsigned int v22; // eax
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
  char v40; // [rsp+Bh] [rbp-ADh]
  _QWORD v41[2]; // [rsp+Ch] [rbp-ACh] BYREF
  int v42; // [rsp+1Ch] [rbp-9Ch] BYREF
  unsigned __int64 v43; // [rsp+20h] [rbp-98h] BYREF
  unsigned __int64 v44; // [rsp+28h] [rbp-90h] BYREF
  void *v45; // [rsp+30h] [rbp-88h] BYREF
  __int128 v46; // [rsp+38h] [rbp-80h]
  void *ptr; // [rsp+50h] [rbp-68h] BYREF
  __int128 v48; // [rsp+58h] [rbp-60h]
  char v49[5]; // [rsp+73h] [rbp-45h] BYREF
  unsigned __int64 v50; // [rsp+78h] [rbp-40h]

  LODWORD(v41[0]) = a4;
  v50 = __readfsqword(0x28u);
  v46 = 0;
  v45 = nullptr;
  if ( sub_790E40((__int64 *)a1, a4, (__int64 *)&v45) <= 0 )
    goto LABEL_24;
  v8 = v46;
  v9 = (char *)haystack;
  if ( (_QWORD)v46 )
  {
    v9 = (char *)v45;
    v8 = v46 - 1;
  }
  v43 = v8;
  sub_79BBF0(&v42, a2, v9, 0, 0);
  if ( LODWORD(v41[0]) == v42 )
    goto LABEL_24;
  v10 = sub_790DB0(a1, v41[0], (__int64 *)&v44, 0);
  if ( v10 )
  {
    v40 = 0;
    if ( v43 < v44 )
    {
      sub_79BBF0(&ptr, a2, v10, v44, 0);
      v40 = 1;
      if ( LODWORD(v41[0]) == (_DWORD)ptr )
      {
LABEL_24:
        v26 = 1;
        goto LABEL_25;
      }
    }
  }
  else
  {
    v40 = 0;
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
  sub_3573A0((char **)v13);
  if ( a5 )
  {
    if ( v42 == -1 )
    {
      v14 = v43;
      if ( v43 > 0x1FF )
      {
        v15 = sub_78F800(*(_QWORD *)a1, (__int64)v49, v9, &v43, 1);
        v14 = v43;
        v9 = (char *)v15;
      }
      v16 = a1 + 1086;
      *(_WORD *)(a1 + 1083) = v14 + 1;
      memcpy((void *)(a1 + 1086), v9, v14);
      v18 = *(_QWORD *)a1;
      if ( *(_BYTE *)(*(_QWORD *)a1 + 5988LL) && (unsigned __int8)must_journal(v16, v9, v17) )
      {
        v48 = 0;
        ptr = nullptr;
        v21 = sub_71CD80(v18, (unsigned __int16 *)(a1 + 1083), 4, v41, (__int64)&ptr);
        add_undo_record(1, ptr, v48);
        v19 = (__int64)ptr;
        if ( ptr )
        {
          *(_QWORD *)&v48 = 0;
          qfree(ptr);
        }
      }
      else
      {
        v19 = v18;
        v21 = sub_71CD80(v18, (unsigned __int16 *)(a1 + 1083), 4, v41, 0);
      }
      if ( !v21 )
        sub_722BF0();
      if ( v40 )
      {
        v22 = v41[0];
        v23 = *(_QWORD *)a1;
        *(_BYTE *)(a1 + 52) = 78;
        *(_WORD *)(a1 + 45) = 6;
        v24 = v43;
        *(_DWORD *)(a1 + 48) = _byteswap_ulong(v22);
        if ( *(_BYTE *)(v23 + 5988) && (unsigned __int8)must_journal(v19, 6, v20) )
        {
          v48 = 0;
          ptr = nullptr;
          v25 = sub_71CD80(v23, (unsigned __int16 *)(a1 + 45), v24, v9, (__int64)&ptr);
          add_undo_record(1, ptr, v48);
          if ( ptr )
          {
            *(_QWORD *)&v48 = 0;
            qfree(ptr);
          }
        }
        else
        {
          v25 = sub_71CD80(v23, (unsigned __int16 *)(a1 + 45), v24, v9, 0);
        }
        if ( !v25 )
          sub_722BF0();
      }
    }
    else
    {
      v28 = v46;
      if ( (_QWORD)v46 )
      {
        v29 = v46 + 5;
        v30 = v46 + 6;
        v28 = v46 - 1;
      }
      else
      {
        v30 = 7;
        v29 = 6;
      }
      v31 = v45;
      if ( *((_QWORD *)&v46 + 1) < v30 )
      {
        v45 = (void *)qvector_reserve(&v45, v45, v30, 1);
        v31 = v45;
      }
      *(_QWORD *)&v46 = v30;
      v31[v29] = 0;
      v32 = (char *)v45 + v28;
      *((_WORD *)v32 + 2) = 25701;
      *(_DWORD *)v32 = 2020173407;
      sub_798B70(a1, a2, (__int64)&v45);
      sub_791030((__int64 *)a1, v41[0], (char *)v45, ((_QWORD)v46 == 0) + (_QWORD)v46 - 1LL, 1);
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
LABEL_25:
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree(v45);
  }
  return v26;
}

