/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000E2B0
// Address: 0x000000014000E2B0

//----- (000000014000E2B0) ----------------------------------------------------
__int64 __fastcall sub_14000E2B0(__int64 a1)
{
  __int64 v2; // r14
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  __int64 **v5; // rcx
  __int64 i; // rax
  __int64 *j; // rcx
  void *v8; // rcx
  _QWORD *v9; // rbx
  _QWORD *v10; // r15
  _QWORD *v11; // rbx
  void *v12; // rcx
  _QWORD *v13; // rbx
  _QWORD *v14; // rbx
  _QWORD *v15; // rbx
  _QWORD *v16; // rbx
  _QWORD *v17; // rbx

  sub_1400181E0(a1, (_QWORD *)(a1 + 888));
  sub_1400181E0(a1, (_QWORD *)(a1 + 896));
  sub_1400181E0(a1, (_QWORD *)(a1 + 880));
  sub_1400181E0(a1, (_QWORD *)(a1 + 792));
  v2 = a1 + 944;
  v3 = *(_QWORD **)(a1 + 944);
  v4 = (_QWORD *)*v3;
  if ( (_QWORD *)*v3 != v3 )
  {
    do
    {
      sub_1400181E0(a1, v4 + 11);
      v5 = (__int64 **)v4[2];
      if ( *((_BYTE *)v5 + 25) )
      {
        for ( i = v4[1]; !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 8) )
        {
          if ( v4 != *(_QWORD **)(i + 16) )
            break;
          v4 = (_QWORD *)i;
        }
        v4 = (_QWORD *)i;
      }
      else
      {
        v4 = (_QWORD *)v4[2];
        for ( j = *v5; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v4 = j;
      }
    }
    while ( v4 != *(_QWORD **)v2 );
  }
  *(_DWORD *)(a1 + 488) = -1;
  v8 = *(void **)(a1 + 808);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 816) = 0;
    j_free(v8);
    *(_QWORD *)(a1 + 808) = 0;
    *(_QWORD *)(a1 + 824) = 0;
  }
  *(_QWORD *)(a1 + 840) = 0;
  *(_BYTE *)(a1 + 921) = sub_14005D470("IDA_SYSTEMBREAKPOINT", 0);
  *(_BYTE *)(a1 + 920) = 0;
  *(_QWORD *)(a1 + 1184) = 0;
  *(_QWORD *)(a1 + 1136) = 0;
  *(_QWORD *)(a1 + 1144) = 0;
  *(_QWORD *)(a1 + 1152) = 0;
  *(_QWORD *)(a1 + 1160) = 0;
  *(_QWORD *)(a1 + 1168) = 0;
  *(_QWORD *)(a1 + 1176) = 0;
  *(_QWORD *)(a1 + 1112) = -1;
  *(_QWORD *)(a1 + 1120) = -1;
  *(_QWORD *)(a1 + 1128) = -1;
  *(_DWORD *)(a1 + 904) = 0;
  *(_QWORD *)(a1 + 912) = -1;
  if ( *(_QWORD *)(a1 + 352) )
  {
    sub_14001A500((__int64 *)(a1 + 352), 0);
    j_free(*(void **)(a1 + 352));
    *(_QWORD *)(a1 + 352) = 0;
    *(_QWORD *)(a1 + 368) = 0;
  }
  v9 = *(_QWORD **)(a1 + 1088);
  sub_140009770(a1 + 1088, a1 + 1088, v9[1]);
  v9[1] = v9;
  *v9 = v9;
  v9[2] = v9;
  *(_QWORD *)(a1 + 1096) = 0;
  v10 = *(_QWORD **)(a1 + 1072);
  v11 = (_QWORD *)v10[1];
  while ( !*((_BYTE *)v11 + 25) )
  {
    sub_1400098F0(a1 + 1072, a1 + 1072, v11[2]);
    v12 = v11;
    v11 = (_QWORD *)*v11;
    j_j_free(v12);
  }
  v10[1] = v10;
  *v10 = v10;
  v10[2] = v10;
  *(_QWORD *)(a1 + 1080) = 0;
  sub_14000E640((_QWORD *)(a1 + 408));
  v13 = *(_QWORD **)(a1 + 928);
  sub_140009860(a1 + 928, a1 + 928, v13[1]);
  v13[1] = v13;
  *v13 = v13;
  v13[2] = v13;
  *(_QWORD *)(a1 + 936) = 0;
  v14 = *(_QWORD **)v2;
  sub_140009860(a1 + 944, a1 + 944, *(_QWORD *)(*(_QWORD *)v2 + 8LL));
  v14[1] = v14;
  *v14 = v14;
  v14[2] = v14;
  *(_QWORD *)(a1 + 952) = 0;
  sub_14000E6B0((_QWORD *)(a1 + 1008));
  v15 = *(_QWORD **)(a1 + 960);
  sub_140009860(a1 + 960, a1 + 960, v15[1]);
  v15[1] = v15;
  *v15 = v15;
  v15[2] = v15;
  *(_QWORD *)(a1 + 968) = 0;
  v16 = *(_QWORD **)(a1 + 976);
  sub_140009860(a1 + 976, a1 + 976, v16[1]);
  v16[1] = v16;
  *v16 = v16;
  v16[2] = v16;
  *(_QWORD *)(a1 + 984) = 0;
  v17 = *(_QWORD **)(a1 + 992);
  sub_140009860(a1 + 992, a1 + 992, v17[1]);
  v17[1] = v17;
  *v17 = v17;
  v17[2] = v17;
  *(_QWORD *)(a1 + 1000) = 0;
  *(_OWORD *)(a1 + 1256) = 0;
  *(_OWORD *)(a1 + 1272) = 0;
  *(_OWORD *)(a1 + 1288) = 0;
  *(_QWORD *)(a1 + 1304) = 0;
  *(_DWORD *)(a1 + 1304) = -1;
  return sub_14001DA60(a1);
}
