__int64 __fastcall sub_A8C970(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  unsigned int v8; // esi
  __int64 v9; // r8
  unsigned int v10; // edx
  __int64 *v11; // rax
  __int64 v12; // rdi
  int v14; // r10d
  __int64 *v15; // r11
  int v16; // edi
  bool v17; // zf
  _QWORD *v18; // rax
  __int64 v19; // [rsp+8h] [rbp-30h] BYREF
  __int64 *v20; // [rsp+18h] [rbp-20h] BYREF

  v6 = *(_QWORD *)(a2 + 128);
  v19 = a2;
  if ( v6
    || (sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), a3, 0, a5, a6),
        (v6 = *(_QWORD *)(a2 + 128)) != 0) )
  {
    v6 = *(_QWORD *)(v6 + 88);
  }
  v7 = *a1;
  v19 = v6;
  v8 = *(_DWORD *)(v7 + 80);
  if ( !v8 )
  {
    v20 = nullptr;
LABEL_15:
    v8 *= 2;
    goto LABEL_16;
  }
  a6 = v8 - 1;
  v9 = *(_QWORD *)(v7 + 64);
  v10 = a6 & (((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4));
  v11 = (__int64 *)(v9 + 16LL * v10);
  v12 = *v11;
  if ( v6 == *v11 )
    return v11[1];
  v14 = 1;
  v15 = nullptr;
  if ( v12 != -4096 )
  {
    while ( 1 )
    {
      if ( v12 == -8192 && !v15 )
        v15 = v11;
      v10 = a6 & (v14 + v10);
      v11 = (__int64 *)(v9 + 16LL * v10);
      v12 = *v11;
      if ( v6 == *v11 )
        return v11[1];
      if ( v12 == -4096 )
      {
        if ( v15 )
          v11 = v15;
        break;
      }
      ++v14;
    }
  }
  v16 = *(_DWORD *)(v7 + 72);
  v20 = v11;
  a3 = (unsigned int)(v16 + 1);
  a5 = (unsigned int)(4 * a3);
  if ( (unsigned int)a5 >= 3 * v8 )
    goto LABEL_15;
  a5 = v8 >> 3;
  if ( v8 - *(_DWORD *)(v7 + 76) - (unsigned int)a3 <= (unsigned int)a5 )
  {
LABEL_16:
    sub_7055A0(v7 + 64, v8, a3, v6, a5, a6);
    sub_A6DD20((__int64 *)(v7 + 64), &v19, &v20);
    v6 = v19;
    LODWORD(a3) = *(_DWORD *)(v7 + 72) + 1;
    v11 = v20;
  }
  v17 = *v11 == -4096;
  *(_DWORD *)(v7 + 72) = a3;
  if ( !v17 )
    --*(_DWORD *)(v7 + 76);
  *v11 = v6;
  v18 = v11 + 1;
  *v18 = 0;
  return *v18;
}
