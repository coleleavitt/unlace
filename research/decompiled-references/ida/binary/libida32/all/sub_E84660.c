void __fastcall sub_E84660(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rax
  _QWORD *v10; // rax
  int v11; // [rsp+4h] [rbp-24h]
  _QWORD v12[4]; // [rsp+8h] [rbp-20h] BYREF

  v12[0] = a2;
  v2 = sub_EFEE00(v12);
  v3 = *(unsigned int *)(a1 + 184);
  if ( v3 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
  {
    v11 = v2;
    sub_22134E0(a1 + 176, a1 + 192, v3 + 1, 4);
    v3 = *(unsigned int *)(a1 + 184);
    v2 = v11;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v3) = v2;
  ++*(_DWORD *)(a1 + 184);
  switch ( v2 )
  {
    case 3:
      v4 = sub_EFF210(v12);
      v5 = *(_QWORD *)(v4 + 8);
      v6 = v4;
      if ( (v5 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        sub_E843E0(a1, *(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF8LL);
        v5 = *(_QWORD *)(v6 + 8);
      }
      v7 = *(_QWORD *)(a1 + 32);
      v8 = (v5 >> 2) & 1;
      if ( (unsigned __int64)(v7 + 1) > *(_QWORD *)(a1 + 40) )
      {
        sub_22130D0(a1 + 24, a1 + 48, v7 + 1, 1);
        v7 = *(_QWORD *)(a1 + 32);
      }
      *(_BYTE *)(*(_QWORD *)(a1 + 24) + v7) = v8;
      ++*(_QWORD *)(a1 + 32);
      sub_E84660(a1, *(_QWORD *)(v6 + 16));
      break;
    case 4:
      v10 = (_QWORD *)sub_EFF230(v12);
      sub_E845B0(a1, v10);
      break;
    case 0:
      v9 = sub_EFEE90(v12, 0);
      sub_E81B80(a1, v9);
      break;
  }
}

