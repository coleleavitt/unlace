unsigned __int64 __fastcall sub_197270(__int64 a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // ecx
  int v6; // edx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v12; // [rsp+0h] [rbp-98h] BYREF
  __int128 v13; // [rsp+8h] [rbp-90h]
  __int64 v14; // [rsp+18h] [rbp-80h]
  __int64 v15; // [rsp+20h] [rbp-78h]
  int v16; // [rsp+28h] [rbp-70h]
  __int64 v17; // [rsp+2Ch] [rbp-6Ch]
  __int64 v18; // [rsp+38h] [rbp-60h]
  __int128 v19; // [rsp+40h] [rbp-58h]
  __int64 v20; // [rsp+50h] [rbp-48h]
  __int64 v21; // [rsp+58h] [rbp-40h]
  int v22; // [rsp+60h] [rbp-38h]
  __int64 v23; // [rsp+64h] [rbp-34h]
  unsigned __int64 v24; // [rsp+78h] [rbp-20h]

  v24 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 88) == -1 )
  {
    v2 = *(_QWORD **)(a1 + 16);
    v3 = v2[35];
    if ( *(_BYTE *)(v3 + 320) || !*(_BYTE *)(*(_QWORD *)(v3 + 1496) + 148LL) )
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
      v12 = 0;
      v5 = *(char *)(v4 + 12);
      v6 = *(char *)(v4 + 13);
      v13 = 0;
      v7 = *(_QWORD *)(a1 + 16);
      v19 = 0;
      v16 = v5;
      v15 = 0;
      v14 = v7 + 96;
      v17 = 0xFFFFFFFFLL;
      v23 = 0xFFFFFFFFLL;
      v8 = *(_QWORD *)(v7 + 280);
      v18 = 0;
      v20 = v7 + 120;
      v21 = 0;
      v22 = v6;
      sub_196E20(&v12, v8);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16));
      v9 = (int)v17;
      *(_BYTE *)(a1 + 468) = 1;
      v10 = v18;
      *(_QWORD *)(a1 + 80) = v9;
      *(_QWORD *)(a1 + 104) = (int)v23;
      *(_DWORD *)(a1 + 88) = *(_QWORD *)(v14 + 8) - v13;
      *(_DWORD *)(a1 + 112) = *(_QWORD *)(v20 + 8) - v19;
      if ( v10 )
      {
        *(_QWORD *)&v19 = 0;
        qfree(v10);
      }
      if ( v12 )
      {
        *(_QWORD *)&v13 = 0;
        qfree(v12);
      }
    }
  }
  return v24 - __readfsqword(0x28u);
}
