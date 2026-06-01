__int64 __fastcall sub_F81DB0(__int64 *a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // esi
  __int64 v9; // r8
  unsigned int v10; // ecx
  __int64 v11; // rdi
  int v13; // r10d
  __int64 *v14; // r11
  int v15; // edi
  bool v16; // zf
  _BYTE *v17; // rdx
  __int64 v18; // [rsp+8h] [rbp-30h] BYREF
  __int64 *v19; // [rsp+18h] [rbp-20h] BYREF

  v6 = *(_QWORD *)(a2 + 128);
  v18 = a2;
  if ( v6
    || (sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), (__int64)a3, a4, a5, a6),
        (v6 = *(_QWORD *)(a2 + 128)) != 0) )
  {
    v6 = *(_QWORD *)(v6 + 88);
  }
  v7 = *a1;
  v18 = v6;
  v8 = *(_DWORD *)(v7 + 104);
  if ( !v8 )
  {
    v19 = nullptr;
LABEL_15:
    v8 *= 2;
    goto LABEL_16;
  }
  a6 = v8 - 1;
  v9 = *(_QWORD *)(v7 + 88);
  v10 = a6 & (((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4));
  a3 = (__int64 *)(v9 + 24LL * v10);
  v11 = *a3;
  if ( v6 == *a3 )
    return a3[1];
  v13 = 1;
  v14 = nullptr;
  if ( v11 != -4096 )
  {
    while ( 1 )
    {
      if ( v11 == -8192 && !v14 )
        v14 = a3;
      v10 = a6 & (v13 + v10);
      a3 = (__int64 *)(v9 + 24LL * v10);
      v11 = *a3;
      if ( v6 == *a3 )
        return a3[1];
      if ( v11 == -4096 )
      {
        if ( v14 )
          a3 = v14;
        break;
      }
      ++v13;
    }
  }
  v15 = *(_DWORD *)(v7 + 96);
  v19 = a3;
  a4 = (unsigned int)(v15 + 1);
  a5 = (unsigned int)(4 * a4);
  if ( (unsigned int)a5 >= 3 * v8 )
    goto LABEL_15;
  a5 = v8 >> 3;
  if ( v8 - *(_DWORD *)(v7 + 100) - (unsigned int)a4 <= (unsigned int)a5 )
  {
LABEL_16:
    sub_A921D0((__int64 **)(v7 + 88), v8, (__int64)a3, a4, a5, a6);
    sub_A6DDE0((__int64 *)(v7 + 88), &v18, &v19);
    v6 = v18;
    a3 = v19;
    LODWORD(a4) = *(_DWORD *)(v7 + 96) + 1;
  }
  v16 = *a3 == -4096;
  *(_DWORD *)(v7 + 96) = a4;
  if ( !v16 )
    --*(_DWORD *)(v7 + 100);
  *a3 = v6;
  v17 = a3 + 1;
  *(_QWORD *)v17 = 0;
  v17[8] = 0;
  return *(_QWORD *)v17;
}
