__int64 __fastcall sub_16F680(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // r12d
  __int64 *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rax
  int v8; // eax
  __int64 v9; // rax
  int v10; // [rsp+Ch] [rbp-BCh] BYREF
  __int64 (__fastcall **v11)(); // [rsp+10h] [rbp-B8h] BYREF
  __int64 v12; // [rsp+18h] [rbp-B0h]
  int v13; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+28h] [rbp-A0h]
  __int64 v15; // [rsp+30h] [rbp-98h]
  __int64 v16; // [rsp+38h] [rbp-90h]
  __int128 v17; // [rsp+40h] [rbp-88h]
  int v18; // [rsp+50h] [rbp-78h]
  __int64 v19; // [rsp+58h] [rbp-70h]
  int v20; // [rsp+60h] [rbp-68h]
  char v21; // [rsp+68h] [rbp-60h]
  unsigned __int64 v22; // [rsp+6Ch] [rbp-5Ch]
  __int64 v23; // [rsp+78h] [rbp-50h]
  __int128 v24; // [rsp+80h] [rbp-48h]
  __int64 v25; // [rsp+90h] [rbp-38h]
  char v26; // [rsp+98h] [rbp-30h]
  unsigned __int64 v27; // [rsp+A8h] [rbp-20h]

  v27 = __readfsqword(0x28u);
  v10 = -1;
  if ( !qword_2532B0 )
    goto LABEL_13;
  v22 = 0xFFFFFFFEFFFFFFFFLL;
  v17 = 0;
  v13 = 0;
  v14 = 0;
  v15 = -1;
  v16 = 0;
  v18 = -1;
  v19 = 0;
  v20 = -1;
  v21 = 0;
  v23 = -1;
  v25 = 0xFFFFFFFFLL;
  v26 = 0;
  v24 = 0;
  sub_15EC40(qword_2532B0, (__int64)&v13, 2u);
  if ( v13 != 5 )
  {
    if ( SHIDWORD(v22) < -1 )
      goto LABEL_6;
    goto LABEL_4;
  }
  v8 = v18;
  if ( v18 == -1 )
    v8 = v22;
  v10 = v8;
  if ( SHIDWORD(v22) >= -1 )
  {
LABEL_4:
    if ( v23 )
    {
      *(_QWORD *)&v24 = 0;
      qfree();
    }
  }
LABEL_6:
  clear_tinfo_t();
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree();
  }
  if ( v10 == -1 )
  {
LABEL_13:
    v10 = qword_251700;
    if ( !(unsigned __int8)sub_16EBB0((__int64)&v10, (__int64)"Please enter the watch address") || v10 == -1 )
      return 1;
  }
  sub_16F560(a1);
  LODWORD(v11) = 1;
  netnode_supset();
  v1 = qword_254370;
  v2 = v10;
  v3 = *(__int64 **)(qword_254370 + 752);
  v4 = v3[1];
  v5 = *v3;
  if ( v3[2] < (unsigned __int64)(v4 + 1) )
  {
    v9 = qvector_reserve();
    v1 = qword_254370;
    v4 = v3[1];
    *v3 = v9;
    v5 = v9;
  }
  *(_DWORD *)(v5 + 4 * v4) = v2;
  ++v3[1];
  v11 = off_2346F8;
  v12 = 0x22B00000000LL;
  v6 = *(_QWORD *)(*(_QWORD *)(v1 + 752) + 8LL);
  LODWORD(v12) = 0x7FFFFFFF;
  HIDWORD(v12) = ((_DWORD)v6 == 0) + (_DWORD)v6 - 1;
  sub_15DA50(v1, *(_QWORD *)(v1 + 880), (__int64)&v11);
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)qword_254370 + 256LL))(qword_254370, 2, 1);
  return 1;
}

