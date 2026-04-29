__int64 __fastcall sub_3E63D0(__int64 a1, _DWORD *a2, _DWORD *a3, __int64 *a4)
{
  __int64 v7; // rsi
  int tinfo_size; // eax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // r14
  __int64 v14; // rbx
  _QWORD *v15; // r15
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 (__fastcall *v19)(_DWORD *, unsigned int); // rdx
  __int64 v20; // rsi
  int v21; // eax
  int v22; // ebx
  __int64 (__fastcall *v23)(_DWORD *, unsigned int); // rax
  __int64 v24; // rsi
  int v25; // eax
  unsigned int v26; // esi
  char v27; // [rsp+7h] [rbp-C1h]
  __int64 v28; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+18h] [rbp-B0h]
  __int64 v30; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v31; // [rsp+28h] [rbp-A0h]
  __int64 v32; // [rsp+38h] [rbp-90h]
  __int64 v33; // [rsp+40h] [rbp-88h] BYREF
  __int64 v34; // [rsp+48h] [rbp-80h] BYREF
  __int128 v35; // [rsp+50h] [rbp-78h]
  __int64 v36; // [rsp+60h] [rbp-68h]
  __int128 v37; // [rsp+68h] [rbp-60h]
  char v38; // [rsp+78h] [rbp-50h]
  unsigned __int64 v39; // [rsp+88h] [rbp-40h]

  v7 = *a4;
  v39 = __readfsqword(0x28u);
  tinfo_size = get_tinfo_size(0, v7, 0);
  v28 = 0;
  *a3 = tinfo_size;
  v29 = 0;
  if ( tinfo_size != -1 )
  {
    v30 = 0;
    v38 = 112;
    v32 = 0;
    v33 = 0;
    v34 = 0;
    v36 = 0;
    v31 = 0;
    v35 = 0;
    v37 = 0;
    copy_tinfo_t(&v33, a4);
    v27 = calc_retloc(&v30);
    if ( v27 )
    {
      v11 = v35;
      *(_QWORD *)&v35 = v29;
      v29 = v11;
      LODWORD(v11) = v34;
      LODWORD(v34) = v28;
      LODWORD(v28) = v11;
    }
    if ( v36 )
    {
      *(_QWORD *)&v37 = 0;
      qfree(v36);
    }
    cleanup_argloc(&v34);
    clear_tinfo_t(&v33);
    v12 = v30;
    if ( v30 )
    {
      v13 = v31;
      if ( (_QWORD)v31 )
      {
        v14 = 0;
        do
        {
          v15 = (_QWORD *)(v12 + 80 * v14);
          clear_tinfo_t(v15 + 8);
          v16 = v15[5];
          if ( v16 )
          {
            v15[6] = 0;
            qfree(v16);
          }
          v17 = v15[2];
          if ( v17 )
          {
            v15[3] = 0;
            qfree(v17);
          }
          ++v14;
          cleanup_argloc(v15);
          v12 = v30;
        }
        while ( v13 != v14 );
      }
      *(_QWORD *)&v31 = 0;
      qfree(v12);
    }
    if ( v27 && (unsigned int)(v28 - 3) <= 1 )
    {
      v18 = *(_QWORD *)a2;
      v30 = 0;
      *(_QWORD *)&v31 = 0;
      v19 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(v18 + 168);
      v20 = (unsigned __int16)v29;
      if ( v19 == sub_3E48E0 )
      {
        if ( (v29 & 0xFFE0) != 0 )
        {
          v21 = a2[173];
          if ( !v21 || (unsigned int)(unsigned __int16)v29 - 32 > 0x1F )
            goto LABEL_37;
          v22 = a2[120] + v21 * ((unsigned __int16)v29 - 32);
        }
        else
        {
          v20 = a2[88] + a2[20] * (unsigned int)(unsigned __int16)v29;
          v22 = a2[88] + a2[20] * (unsigned __int16)v29;
        }
      }
      else
      {
        v22 = v19(a2, (unsigned __int16)v29);
      }
      if ( v22 != -1 )
      {
        if ( (_DWORD)v28 == 3
          || ((v23 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)a2 + 168LL), v23 != sub_3E48E0)
            ? (v24 = (unsigned int)v23(a2, WORD1(v29)))
            : WORD1(v29) > 0x1Fu
            ? ((v25 = a2[173]) == 0 || (v26 = WORD1(v29) - 32, v26 > 0x1F)
             ? (v24 = 0xFFFFFFFFLL)
             : (v24 = a2[120] + v25 * v26))
            : (v24 = a2[88] + a2[20] * (unsigned int)WORD1(v29)),
              v22 + *a3 / 2 == (_DWORD)v24) )
        {
          cleanup_argloc(&v30);
          LODWORD(v31) = v22;
          *(_DWORD *)a1 = 0;
          LODWORD(v30) = 3;
          copy_argloc(a1, &v30);
          cleanup_argloc(&v30);
          goto LABEL_3;
        }
        if ( !under_debugger )
          sub_37DDE0(0xCE18u, v24, 0.0);
LABEL_42:
        BUG();
      }
LABEL_37:
      if ( !under_debugger )
        sub_37DDE0(0xCE17u, v20, 0.0);
      goto LABEL_42;
    }
  }
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
LABEL_3:
  cleanup_argloc(&v28);
  return a1;
}
