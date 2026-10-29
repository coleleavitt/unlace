unsigned __int64 __fastcall sub_7B62C0(__int64 a1, __int64 a2, __int64 a3, char a4, _QWORD *a5)
{
  __int64 *v5; // rbx
  __int64 v8; // rsi
  __int64 (*v9)(); // rax
  size_t v10; // rdx
  size_t v11; // r15
  __int16 v12; // ax
  __int64 v13; // rdi
  __int8 *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r15
  char v17; // r15
  __int64 v18; // rdi
  unsigned int v19; // r15d
  char v20; // bp
  __int64 v21; // rbp
  __int8 *v22; // r13
  int v23; // ecx
  __int64 v24; // rdx
  unsigned __int8 v25; // r9
  int v26; // eax
  __int64 v27; // rax
  unsigned int v28; // r9d
  unsigned __int64 v29; // r15
  __int64 (*v30)(); // rax
  char v31; // al
  __int64 v32; // r9
  unsigned int v33; // eax
  __int64 v34; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r15
  char v39; // al
  char v40; // al
  void *v41; // rdi
  __int64 v42; // [rsp+8h] [rbp-90h]
  unsigned __int8 v43; // [rsp+8h] [rbp-90h]
  __int64 *v45; // [rsp+18h] [rbp-80h]
  int v46; // [rsp+24h] [rbp-74h]
  int v47; // [rsp+28h] [rbp-70h]
  char v48; // [rsp+2Fh] [rbp-69h]
  __int64 v49; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v50; // [rsp+38h] [rbp-60h] BYREF
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __int128 v52; // [rsp+48h] [rbp-50h]
  unsigned __int64 v53; // [rsp+58h] [rbp-40h]

  v5 = *(__int64 **)a2;
  v53 = __readfsqword(0x28u);
  v47 = a4 & 3;
  v46 = a4 & 2;
  v45 = &v5[6 * *(_QWORD *)(a2 + 8)];
  if ( v5 != v45 )
  {
    while ( 1 )
    {
      v21 = *v5;
      v22 = (__int8 *)v5[3];
      v42 = swap64(*(_QWORD *)(*v5 + 4));
      v49 = a3 + v42;
      *(_QWORD *)(*v5 + 4) = swap64(a3 + v42);
      v18 = *(_QWORD *)a1;
      v23 = *(unsigned __int16 *)(v21 + 1);
      v24 = *(unsigned __int8 *)(*(_QWORD *)a1 + 5881LL);
      v8 = (unsigned int)(v24 + 1);
      if ( v23 <= (int)v8 )
      {
        if ( !under_debugger )
          interr(2095);
LABEL_63:
        BUG();
      }
      v25 = *(_BYTE *)(v21 + v24 + 4);
      v26 = v23 + -2 - v24;
      if ( v26 == 1 || v26 == (_DWORD)v24 )
      {
        if ( !a5 )
          goto LABEL_19;
        v43 = *(_BYTE *)(v21 + v24 + 4);
        v27 = sub_7B51C0(v18, v21);
        v28 = v43;
        v29 = v27;
        v30 = *(__int64 (**)())(*a5 + 32LL);
        if ( v30 != sub_42AFB0 )
        {
          v40 = ((__int64 (__fastcall *)(_QWORD *, __int64, _QWORD, unsigned __int64, __int64 *))v30)(
                  a5,
                  v49,
                  v43,
                  v29,
                  v5 + 3);
          v28 = v43;
          if ( !v40 )
            goto LABEL_24;
        }
        v8 = v28;
        v22 = (__int8 *)v5[3];
        v31 = sub_7B57A0((__int64)a5, v28, v29);
        v18 = *(_QWORD *)a1;
        if ( !v31 )
          goto LABEL_19;
        v33 = v32;
        v34 = v5[4];
        if ( *(unsigned __int16 *)(v21 + 1) - 3 == *(unsigned __int8 *)(v18 + 5881) )
        {
          BYTE1(v33) = BYTE1(v32) | 8;
          v32 = v33;
        }
        v5 += 6;
        sub_7B9B80(a1, v49, v22, v34, v29, v32);
        if ( v45 == v5 )
          return v53 - __readfsqword(0x28u);
      }
      else
      {
        if ( a5 && (v8 = v49, v9 = *(__int64 (**)())(*a5 + 40LL), v9 != sub_7B51B0) )
        {
          v48 = *(_BYTE *)(v21 + v24 + 4);
          if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64, _QWORD, __int64 *))v9)(a5, v49, v25, v5) )
            goto LABEL_24;
          v10 = v5[4];
          v11 = v10;
          if ( v48 != 78 )
          {
LABEL_44:
            v18 = *(_QWORD *)a1;
            goto LABEL_20;
          }
        }
        else
        {
          v10 = v5[4];
          v11 = v10;
          if ( v25 != 78 )
            goto LABEL_44;
        }
        if ( v10 != 9 || *v22 )
        {
          if ( v22[v10 - 1] )
          {
            v12 = v10 + 1;
            v10 = (int)v10;
          }
          else
          {
            v12 = v10;
            v11 = v10 - 1;
            v10 = (int)v10 - 1;
          }
        }
        else
        {
          v10 = 9;
          v12 = 10;
        }
        *(_WORD *)(a1 + 1091) = v12;
        v13 = a1 + 1094;
        v14 = v22;
        memcpy((void *)(a1 + 1094), v22, v10);
        if ( v46 )
        {
          if ( !a5 )
          {
            if ( !under_debugger )
              interr(2864);
            goto LABEL_63;
          }
          v14 = (__int8 *)a5[1];
          v13 = *(_QWORD *)a1;
          if ( (unsigned __int8)sub_7B2560(*(_QWORD *)a1, v14, &v50, v22, v11, 0, nullptr) )
          {
            ptr = nullptr;
            v52 = 0;
            if ( v11 )
            {
              v41 = nullptr;
              if ( v11 != -1 )
              {
                ptr = (void *)qvector_reserve(&ptr, 0, v11 + 1, 1);
                v41 = ptr;
              }
              *(_QWORD *)&v52 = v11 + 1;
              memmove(v41, v22, v11);
              *((_BYTE *)ptr + v11) = 0;
            }
            sub_368890();
          }
        }
        v16 = *(_QWORD *)a1;
        if ( *(_BYTE *)(*(_QWORD *)a1 + 6020LL) && (unsigned __int8)must_journal(v13, v14, v15) )
        {
          v52 = 0;
          ptr = nullptr;
          v39 = sub_73D2C0(v16, (unsigned __int16 *)(a1 + 1091), 8, &v49, (__int64)&ptr);
          v8 = (__int64)ptr;
          v17 = v39;
          add_undo_record(1, ptr, v52);
          if ( ptr )
          {
            *(_QWORD *)&v52 = 0;
            qfree(ptr);
          }
        }
        else
        {
          v8 = a1 + 1091;
          v17 = sub_73D2C0(v16, (unsigned __int16 *)(a1 + 1091), 8, &v49, 0);
        }
        if ( !v17 )
LABEL_60:
          sub_743130();
        if ( !v47 )
        {
          *(_WORD *)(a1 + 53) = 10;
          v36 = swap64(v42);
          v38 = *(_QWORD *)a1;
          *(_BYTE *)(a1 + 64) = 78;
          *(_QWORD *)(a1 + 56) = v36;
          if ( *(_BYTE *)(v38 + 6020) && (unsigned __int8)must_journal(v42, 10, v37) )
          {
            v8 = a1 + 53;
            ptr = nullptr;
            v52 = 0;
            if ( (unsigned __int8)sub_73A6B0(v38, (_WORD *)(a1 + 53), (__int64)&ptr) )
            {
              v8 = (__int64)ptr;
              add_undo_record(1, ptr, v52);
            }
            if ( ptr )
            {
              *(_QWORD *)&v52 = 0;
              qfree(ptr);
            }
          }
          else
          {
            v8 = a1 + 53;
            sub_73A6B0(v38, (_WORD *)(a1 + 53), 0);
          }
        }
        v18 = *(_QWORD *)a1;
LABEL_19:
        v10 = v5[4];
LABEL_20:
        v19 = (unsigned __int16)v10;
        if ( *(_BYTE *)(v18 + 6020) && (unsigned __int8)must_journal(v18, v8, v10) )
        {
          v52 = 0;
          ptr = nullptr;
          v20 = sub_73D2C0(v18, (unsigned __int16 *)(v21 + 1), v19, v22, (__int64)&ptr);
          add_undo_record(1, ptr, v52);
          if ( ptr )
          {
            *(_QWORD *)&v52 = 0;
            qfree(ptr);
          }
        }
        else
        {
          v20 = sub_73D2C0(v18, (unsigned __int16 *)(v21 + 1), v19, v22, 0);
        }
        if ( !v20 )
          goto LABEL_60;
LABEL_24:
        v5 += 6;
        if ( v45 == v5 )
          return v53 - __readfsqword(0x28u);
      }
    }
  }
  return v53 - __readfsqword(0x28u);
}
