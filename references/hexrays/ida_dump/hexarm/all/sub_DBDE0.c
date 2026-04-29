__int64 __fastcall sub_DBDE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v5; // r14
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // r11d
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // r13
  char v14; // al
  int v16; // eax
  __int64 v17; // r13
  __int64 v18; // rax
  int v19; // eax
  int v20; // r15d
  __int64 i; // rax
  __int64 v22; // rax
  unsigned int v23; // [rsp+8h] [rbp-E0h]
  char v25; // [rsp+3Fh] [rbp-A9h] BYREF
  __int64 v26; // [rsp+40h] [rbp-A8h] BYREF
  int v27; // [rsp+48h] [rbp-A0h]
  _QWORD v28[2]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v29; // [rsp+60h] [rbp-88h]
  __int64 v30; // [rsp+68h] [rbp-80h]
  _QWORD v31[2]; // [rsp+80h] [rbp-68h] BYREF
  __int64 v32; // [rsp+90h] [rbp-58h]
  __int64 v33; // [rsp+98h] [rbp-50h]
  unsigned __int64 v34; // [rsp+A8h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  if ( !a3 )
  {
    if ( !under_debugger )
      sub_3835A0(51757);
LABEL_46:
    BUG();
  }
  if ( a4 && !(unsigned __int8)sub_121C80(a3, *(_QWORD *)(a4 + 8), 0) )
  {
    if ( !under_debugger )
      sub_3835A0(51811);
    goto LABEL_46;
  }
  sub_1240C0(v28, a2, a3, 1);
  if ( sub_64330(v28, *(_DWORD *)(a1 + 132)) )
  {
    *(_QWORD *)(a1 + 104) = a3;
  }
  else if ( a3 == a4 )
  {
    *(_QWORD *)(a1 + 104) = 0;
  }
  else
  {
    v8 = sub_1245A0(a2, *(unsigned int *)(a1 + 132), a3, a4, 0, 1);
    *(_QWORD *)(a1 + 104) = v8;
    if ( !v8 )
    {
      v16 = *(_DWORD *)(a1 + 128);
      v17 = a3;
      v26 = (__int64)&off_4D7420;
      v27 = v16;
      do
      {
        if ( !a4 )
        {
          sub_127460(v31, a2, v17, 1);
          LOBYTE(v19) = sub_64330(v31, *(_DWORD *)(a1 + 132));
          LODWORD(v5) = v19;
          if ( v32 )
          {
            v33 = 0;
            qfree(v32);
          }
          qfree(v31[0]);
          if ( (_BYTE)v5 )
            break;
        }
        v18 = sub_11FDC0(v17, 1);
        if ( v18 )
        {
          if ( *(_BYTE *)(v18 + 64) == 8 )
          {
            v5 = *(_QWORD *)(v18 + 72);
            v20 = 0;
            for ( i = 0; (unsigned __int64)v20 < *(_QWORD *)(v5 + 32); i = ++v20 )
            {
              if ( *(_QWORD *)(a1 + 104) )
                break;
              if ( (unsigned int)for_all_arglocs(
                                   &v26,
                                   *(_QWORD *)(v5 + 24) + 80 * i + 56,
                                   *(unsigned int *)(*(_QWORD *)(v5 + 24) + 80 * i + 4),
                                   0) )
                *(_QWORD *)(a1 + 104) = v17;
            }
          }
        }
        v17 = *(_QWORD *)(v17 + 16);
        if ( a4 == v17 )
          break;
      }
      while ( !*(_QWORD *)(a1 + 104) );
    }
  }
  if ( !a5 )
    goto LABEL_13;
  v9 = *(_QWORD *)(a1 + 32);
  v10 = *(_DWORD *)(a1 + 128);
  v5 = *(_QWORD *)(v9 + 32);
  v11 = *(_QWORD *)(v9 + 480);
  v12 = *(_QWORD *)(a3 + 24) + 1LL;
  v13 = *(_QWORD *)(v11 + 112);
  v26 = v12;
  if ( *(char *)(*(_QWORD *)(v11 + 8) + 10LL) >= 0
    || (v23 = v10, v25 = 1, LOBYTE(v31[0]) = 1, v22 = sub_CF9B0(0x2Du, &v26, &v25, v31), v10 = v23, v22 != 1) )
  {
    v26 = -1;
LABEL_10:
    v14 = sub_32EB60(v31, v13, v10, v5, v12, 1);
    goto LABEL_11;
  }
  if ( v26 == -1 )
    goto LABEL_10;
  v14 = sub_32EB60(v31, v13, v23, v26, v26 + 1, 1);
  v10 = v23;
  if ( !v14 )
    goto LABEL_10;
LABEL_11:
  if ( (v14 & 2) == 0 )
  {
    *(_QWORD *)(a1 + 112) = -1;
LABEL_13:
    LOBYTE(v5) = *(_QWORD *)(a1 + 104) != 0;
    goto LABEL_14;
  }
  LODWORD(v5) = a5;
  *(_QWORD *)(a1 + 112) = v31[0];
  if ( v14 != 2 )
    goto LABEL_13;
LABEL_14:
  if ( v29 )
  {
    v30 = 0;
    qfree(v29);
  }
  qfree(v28[0]);
  return (unsigned int)v5;
}
