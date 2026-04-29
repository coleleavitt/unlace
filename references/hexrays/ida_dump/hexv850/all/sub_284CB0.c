__int64 __fastcall sub_284CB0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned int v4; // r12d
  __int64 *v6; // rdx
  __int64 **v7; // rax
  __int64 v8; // r14
  __int64 *v9; // rbp
  __int64 v11; // rax
  int v12; // r15d
  __int64 v13; // rdi
  __int64 v14; // rsi
  __m128 v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // [rsp+8h] [rbp-A0h] BYREF
  __int64 (__fastcall **v18)(); // [rsp+10h] [rbp-98h] BYREF
  int v19; // [rsp+18h] [rbp-90h]
  __int64 v20; // [rsp+20h] [rbp-88h]
  __int128 v21; // [rsp+28h] [rbp-80h]
  __int64 v22; // [rsp+38h] [rbp-70h]
  __int128 v23; // [rsp+40h] [rbp-68h]
  __m128 v24; // [rsp+50h] [rbp-58h]
  int v25; // [rsp+60h] [rbp-48h]
  unsigned __int64 v26; // [rsp+68h] [rbp-40h]

  v2 = a1[2];
  v26 = __readfsqword(0x28u);
  v3 = a1[3];
  LODWORD(v2) = *(_DWORD *)(*(_QWORD *)(v2 + 8 * v3 - 8) + 8LL);
  LOBYTE(v3) = (_DWORD)v2 != 83 && (_DWORD)v2 != 71;
  if ( (_BYTE)v3 )
  {
    if ( !under_debugger )
      sub_37CFE0(50600);
LABEL_19:
    BUG();
  }
  v4 = v3;
  v6 = (__int64 *)(a1[5] + 16LL * a1[6] - 16);
  v7 = (__int64 **)v6[1];
  if ( (__int64 **)a2 != v7 + 2 )
  {
    if ( !under_debugger )
      sub_37CFE0(52725);
    goto LABEL_19;
  }
  v8 = *v6;
  v9 = *v7;
  if ( (__int64 *)*v6 != *v7 && *((_DWORD *)v9 + 6) == 72 && *((_DWORD *)v9 + 7) == -1 )
  {
    v11 = v9[5];
    v12 = *(_DWORD *)(v11 + 8);
    if ( (unsigned int)(v12 - 55) <= 1 )
    {
      v13 = *(_QWORD *)(a2 + 24);
      v17 = *(_QWORD *)(v11 + 24);
      if ( (unsigned int)sub_2516A0(v13, v17) == 1 )
      {
        v14 = *(_QWORD *)(a2 + 24);
        v15 = _mm_loadh_ps((const double *)&v17);
        v21 = 0;
        v25 = (v12 != 55) + 53;
        v19 = 2;
        v20 = 0;
        v22 = 0;
        v18 = (__int64 (__fastcall **)())&off_4B45D8;
        v23 = 0;
        v24 = v15;
        if ( (int)sub_2506C0((__int64 *)&v18, v14, a2) > 0 )
        {
          v16 = *v9;
          *(_QWORD *)v9[1] = *v9;
          *(_QWORD *)(v16 + 8) = v9[1];
          sub_24FC90((__int64)(v9 + 2));
          qfree(v9);
          --*(_QWORD *)(v8 + 16);
          v4 = 1;
        }
        v18 = off_4AF6D8;
        if ( v22 )
        {
          *(_QWORD *)&v23 = 0;
          qfree(v22);
        }
        if ( v20 )
        {
          *(_QWORD *)&v21 = 0;
          qfree(v20);
        }
      }
    }
  }
  return v4;
}
