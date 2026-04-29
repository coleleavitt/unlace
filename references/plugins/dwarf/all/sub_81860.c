char *__fastcall sub_81860(__int64 *a1, char *a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v9; // r10
  __int64 v10; // r8
  _QWORD *v11; // r13
  int v12; // ebp
  int v13; // eax
  unsigned __int64 v14; // rbx
  __int64 v15; // rbp
  _DWORD *v16; // r15
  unsigned __int64 v17; // r12
  void (__fastcall *v18)(_QWORD *); // r9
  void (__fastcall *v19)(_QWORD *); // rsi
  _QWORD *v20; // r9
  __int64 v21; // rbx
  _QWORD *v22; // r14
  void *v23; // rdi
  __int64 v24; // rbx
  int v25; // r14d
  _QWORD *v26; // rbp
  __int64 v27; // rdi
  __int64 v28; // rdi
  unsigned __int64 v29; // r14
  __int64 v30; // rdx
  int v31; // r8d
  const char *v32; // rax
  int v33; // [rsp+8h] [rbp-60h]
  int v34; // [rsp+8h] [rbp-60h]
  __int64 v35; // [rsp+8h] [rbp-60h]
  int v36; // [rsp+8h] [rbp-60h]
  int v37; // [rsp+8h] [rbp-60h]
  int v38; // [rsp+8h] [rbp-60h]
  int v39; // [rsp+8h] [rbp-60h]
  unsigned __int64 v40; // [rsp+10h] [rbp-58h]
  unsigned __int64 v41; // [rsp+10h] [rbp-58h]
  __int64 *v42; // [rsp+18h] [rbp-50h]
  char *v43; // [rsp+20h] [rbp-48h]
  __int64 v44; // [rsp+28h] [rbp-40h]

  if ( !a2 )
  {
    a3 = 1024;
    a2 = (char *)&unk_CC8E0 + 1024 * (__int64)dword_D08E0;
    dword_D08E0 = (dword_D08E0 + 1) % 16;
  }
  v6 = *a1;
  v7 = *a1 & 0x7FFFFFFFFFFFFFFFLL;
  if ( v7 && v6 != -1 )
  {
    v9 = a1[1];
    v10 = v9 + 304;
    if ( v6 < 0 )
      v10 = v9 + 280;
    v11 = (_QWORD *)v10;
    v12 = *(_DWORD *)(v10 + 8) - 1;
    if ( v12 < 0 )
    {
      v30 = *a1 & 0x7FFFFFFFFFFFFFFFLL;
      v29 = 0;
      v31 = 0;
    }
    else
    {
      v44 = a3;
      v42 = a1;
      v13 = *(_DWORD *)(v10 + 8) - 1;
      v43 = a2;
      v14 = v7;
      v15 = 264LL * (unsigned int)v12;
      while ( 1 )
      {
        v16 = *(_DWORD **)(*v11 + v15 + 216);
        if ( !v16 )
          break;
        v17 = *((_QWORD *)v16 + 9);
        if ( !v16[2] )
        {
          v18 = **(void (__fastcall ***)(_QWORD *))v16;
          if ( v18 == sub_15E30 )
          {
            v19 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)v16 + 16LL);
            if ( v19 == sub_15D70 )
            {
              v20 = *((_QWORD **)v16 + 16);
              *(_QWORD *)v16 = &off_C71D8;
              if ( v20 )
              {
                if ( v20[2] )
                {
                  v33 = v13;
                  v40 = v14;
                  v21 = v20[2];
                  v22 = v20;
                  do
                  {
                    sub_80300(*(_QWORD **)(v21 + 24));
                    v23 = (void *)v21;
                    v21 = *(_QWORD *)(v21 + 16);
                    operator delete(v23, 0x30u);
                  }
                  while ( v21 );
                  v13 = v33;
                  v14 = v40;
                  v20 = v22;
                }
                v34 = v13;
                operator delete(v20, 0x30u);
                v13 = v34;
              }
              if ( *((_QWORD *)v16 + 19) )
              {
                v35 = v15;
                v41 = v14;
                v24 = *((_QWORD *)v16 + 19);
                v25 = v13;
                do
                {
                  v26 = (_QWORD *)v24;
                  sub_80A30(*(_QWORD **)(v24 + 24));
                  v27 = *(_QWORD *)(v24 + 32);
                  v24 = *(_QWORD *)(v24 + 16);
                  if ( v27 )
                  {
                    v26[5] = 0;
                    qfree(v27);
                  }
                  operator delete(v26, 0x48u);
                }
                while ( v24 );
                v15 = v35;
                v14 = v41;
                v13 = v25;
              }
              v28 = *((_QWORD *)v16 + 12);
              if ( v28 )
              {
                *((_QWORD *)v16 + 13) = 0;
                v36 = v13;
                qfree(v28);
                v13 = v36;
              }
              v37 = v13;
              operator delete(v16, 0xC0u);
              v13 = v37;
            }
            else
            {
              v39 = v13;
              v19(v16);
              v13 = v39;
            }
          }
          else
          {
            v38 = v13;
            v18(v16);
            v13 = v38;
          }
        }
        if ( v14 >= v17 )
          goto LABEL_37;
        --v13;
        v15 -= 264;
        if ( v13 == -1 )
        {
          v7 = v14;
          a3 = v44;
          v29 = 0;
          a2 = v43;
          v30 = v7;
          v31 = 0;
          v9 = v42[1];
          goto LABEL_33;
        }
      }
      v17 = 0;
LABEL_37:
      v7 = v14;
      a2 = v43;
      a3 = v44;
      v29 = v17;
      v31 = v13;
      v9 = v42[1];
      v30 = v7 - v17;
    }
LABEL_33:
    v32 = " (In companion file)";
    if ( !*(_QWORD *)(v9 + 80) )
      v32 = "";
    qsnprintf(a2, a3, "<%llu (CU %d@%llu+%llu%s)>", v7, v31, v29, v30, v32);
  }
  else
  {
    qsnprintf(a2, a3, "<invalid DIE reference>");
  }
  return a2;
}
