__int64 __fastcall sub_3E5740(__int64 a1, _DWORD *a2, _DWORD *a3, __int64 *a4)
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
  int v21; // ebx
  __int64 (__fastcall *v22)(_DWORD *, unsigned int); // rax
  __int64 v23; // rsi
  char v24; // [rsp+7h] [rbp-C1h]
  __int64 v25; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+18h] [rbp-B0h]
  __int64 v27; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v28; // [rsp+28h] [rbp-A0h]
  __int64 v29; // [rsp+38h] [rbp-90h]
  __int64 v30; // [rsp+40h] [rbp-88h] BYREF
  __int64 v31; // [rsp+48h] [rbp-80h] BYREF
  __int128 v32; // [rsp+50h] [rbp-78h]
  __int64 v33; // [rsp+60h] [rbp-68h]
  __int128 v34; // [rsp+68h] [rbp-60h]
  char v35; // [rsp+78h] [rbp-50h]
  unsigned __int64 v36; // [rsp+88h] [rbp-40h]

  v7 = *a4;
  v36 = __readfsqword(0x28u);
  tinfo_size = get_tinfo_size(0, v7, 0);
  v25 = 0;
  *a3 = tinfo_size;
  v26 = 0;
  if ( tinfo_size != -1 )
  {
    v27 = 0;
    v35 = 112;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v33 = 0;
    v28 = 0;
    v32 = 0;
    v34 = 0;
    copy_tinfo_t(&v30, a4);
    v24 = calc_retloc(&v27);
    if ( v24 )
    {
      v11 = v32;
      *(_QWORD *)&v32 = v26;
      v26 = v11;
      LODWORD(v11) = v31;
      LODWORD(v31) = v25;
      LODWORD(v25) = v11;
    }
    if ( v33 )
    {
      *(_QWORD *)&v34 = 0;
      qfree(v33);
    }
    cleanup_argloc(&v31);
    clear_tinfo_t(&v30);
    v12 = v27;
    if ( v27 )
    {
      v13 = v28;
      if ( (_QWORD)v28 )
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
          v12 = v27;
        }
        while ( v13 != v14 );
      }
      *(_QWORD *)&v28 = 0;
      qfree(v12);
    }
    if ( v24 && (unsigned int)(v25 - 3) <= 1 )
    {
      v18 = *(_QWORD *)a2;
      v27 = 0;
      *(_QWORD *)&v28 = 0;
      v19 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(v18 + 168);
      v20 = (unsigned __int16)v26;
      if ( v19 == sub_3E40F0 )
      {
        if ( (v26 & 0xFFE0) != 0 )
        {
          if ( (unsigned __int16)v26 == 48 )
          {
            v21 = a2[120];
          }
          else
          {
            if ( (unsigned __int16)v26 != 49 )
              goto LABEL_39;
            v21 = a2[121];
          }
        }
        else
        {
          v20 = a2[88] + a2[20] * (unsigned int)(unsigned __int16)v26;
          v21 = a2[88] + a2[20] * (unsigned __int16)v26;
        }
      }
      else
      {
        v21 = v19(a2, (unsigned __int16)v26);
      }
      if ( v21 != -1 )
      {
        if ( (_DWORD)v25 == 3
          || ((v22 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)a2 + 168LL), v22 != sub_3E40F0)
            ? (v23 = (unsigned int)v22(a2, WORD1(v26)))
            : WORD1(v26) > 0x1Fu
            ? (WORD1(v26) == 48
             ? (v23 = (unsigned int)a2[120])
             : WORD1(v26) != 49
             ? (v23 = 0xFFFFFFFFLL)
             : (v23 = (unsigned int)a2[121]))
            : (v23 = a2[88] + a2[20] * (unsigned int)WORD1(v26)),
              v21 + *a3 / 2 == (_DWORD)v23) )
        {
          cleanup_argloc(&v27);
          LODWORD(v28) = v21;
          *(_DWORD *)a1 = 0;
          LODWORD(v27) = 3;
          copy_argloc(a1, &v27);
          cleanup_argloc(&v27);
          goto LABEL_3;
        }
        if ( !under_debugger )
          sub_37CFE0(0xCEDAu, v23, 0.0);
LABEL_44:
        BUG();
      }
LABEL_39:
      if ( !under_debugger )
        sub_37CFE0(0xCED9u, v20, 0.0);
      goto LABEL_44;
    }
  }
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
LABEL_3:
  cleanup_argloc(&v25);
  return a1;
}
