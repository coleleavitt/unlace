__int64 __fastcall sub_2183E0(__int64 a1, _QWORD *a2, char a3)
{
  unsigned int v4; // r13d
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // r14
  __int64 v11; // rbx
  _QWORD *v12; // r15
  __int64 v13; // rdi
  __int64 v14; // rdi
  unsigned int v15; // edx
  __int64 v16; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+18h] [rbp-C0h]
  _BYTE v18[16]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v20; // [rsp+38h] [rbp-A0h] BYREF
  __int128 v21; // [rsp+48h] [rbp-90h] BYREF
  __int64 v22; // [rsp+58h] [rbp-80h] BYREF
  __int128 v23; // [rsp+60h] [rbp-78h]
  __int64 v24; // [rsp+70h] [rbp-68h]
  __int128 v25; // [rsp+78h] [rbp-60h]
  char v26; // [rsp+88h] [rbp-50h]
  unsigned __int64 v27; // [rsp+98h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  if ( (unsigned __int8)*a2 && (get_tinfo_property(*a2, 2) & 0xF) != 0xB )
  {
    v7 = *(_DWORD *)(a1 + 148);
    v16 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0u;
    v22 = 0;
    v24 = 0;
    v20 = 0;
    v23 = 0;
    v25 = 0;
    if ( (v7 & 0xFFFFFF0F) != 0 || v7 == 192 )
    {
      DWORD1(v21) = v7;
      LOBYTE(v7) = -64;
    }
    v26 = v7;
    copy_tinfo_t((char *)&v21 + 8, a2);
    v4 = calc_retloc(&v19);
    if ( (_BYTE)v4 )
    {
      v8 = v23;
      *(_QWORD *)&v23 = v17;
      v17 = v8;
      LODWORD(v8) = v22;
      LODWORD(v22) = v16;
      LODWORD(v16) = v8;
    }
    if ( v24 )
    {
      *(_QWORD *)&v25 = 0;
      qfree(v24);
    }
    cleanup_argloc(&v22);
    clear_tinfo_t((char *)&v21 + 8);
    v9 = v19;
    if ( v19 )
    {
      v10 = v20;
      if ( (_QWORD)v20 )
      {
        v11 = 0;
        do
        {
          v12 = (_QWORD *)(v9 + 80 * v11);
          clear_tinfo_t(v12 + 8);
          v13 = v12[5];
          if ( v13 )
          {
            v12[6] = 0;
            qfree(v13);
          }
          v14 = v12[2];
          if ( v14 )
          {
            v12[3] = 0;
            qfree(v14);
          }
          ++v11;
          cleanup_argloc(v12);
          v9 = v19;
        }
        while ( v10 != v11 );
      }
      *(_QWORD *)&v20 = 0;
      qfree(v9);
    }
    if ( !(_BYTE)v4 )
      goto LABEL_28;
    sub_1C1290((__int64)v18, *(_QWORD *)(a1 + 16), (__int64)&v16, *(_DWORD *)(a1 + 144));
    v15 = *(_DWORD *)(a1 + 144);
    v19 = 0;
    v21 = 0;
    v20 = 0u;
    sub_1BE430((__int64)v18, &v19, v15, 0, nullptr);
    if ( a3 )
    {
      if ( !sub_11E070((__int64)&v19, a1 + 48) )
      {
LABEL_24:
        copy_argloc(a1 + 120, v18);
LABEL_25:
        if ( *((_QWORD *)&v20 + 1) )
        {
          *(_QWORD *)&v21 = 0;
          qfree(*((_QWORD *)&v20 + 1));
        }
        qfree(v19);
        cleanup_argloc(v18);
LABEL_28:
        cleanup_argloc(&v16);
        return v4;
      }
    }
    else if ( (unsigned __int8)sub_5FDA0((_QWORD *)(a1 + 48), &v19)
           && (unsigned __int8)sub_312680((char *)&v20 + 8, a1 + 64) )
    {
      goto LABEL_24;
    }
    v4 = 0;
    goto LABEL_25;
  }
  return 0;
}
