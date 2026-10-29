__int64 __fastcall sub_2196B60(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v11; // r8d
  unsigned int v12; // edi
  unsigned int v13; // esi
  unsigned int v14; // ecx
  unsigned int v15; // edx
  unsigned int v16; // eax
  unsigned __int64 v17; // r9
  unsigned __int32 v18; // r10d
  unsigned __int32 v19; // r11d
  unsigned __int32 v20; // r13d
  unsigned __int32 v21; // r14d
  unsigned __int32 v22; // r15d
  unsigned __int32 v23; // ebp
  __int64 v24; // r12
  __int64 v25; // [rsp+8h] [rbp-70h] BYREF
  const char *v26; // [rsp+10h] [rbp-68h] BYREF
  __int16 v27; // [rsp+30h] [rbp-48h]

  if ( (unsigned __int64)a3 >= sub_215DEC0(a2)
    && (v8 = sub_215DEC0(a2), v7 = (__int64)(a3 + 6), (unsigned __int64)(a3 + 6) <= v6 + v8) )
  {
    v11 = *a3;
    v12 = a3[1];
    v13 = a3[2];
    v14 = a3[3];
    v15 = a3[4];
    v16 = a3[5];
    v17 = *(unsigned int *)(a2 + 8);
    v18 = _byteswap_ulong(*a3);
    v19 = _byteswap_ulong(v12);
    v20 = _byteswap_ulong(v13);
    v21 = _byteswap_ulong(v14);
    v22 = _byteswap_ulong(v15);
    v23 = _byteswap_ulong(v16);
    if ( (unsigned int)v17 <= 0x14 )
    {
      v24 = 1398784;
      if ( _bittest64(&v24, v17) )
      {
        v16 = v23;
        v15 = v22;
        v14 = v21;
        v13 = v20;
        v12 = v19;
        v11 = v18;
      }
    }
    *(_BYTE *)(a1 + 24) &= ~1u;
    *(_DWORD *)a1 = v11;
    *(_DWORD *)(a1 + 4) = v12;
    *(_DWORD *)(a1 + 8) = v13;
    *(_DWORD *)(a1 + 12) = v14;
    *(_DWORD *)(a1 + 16) = v15;
    *(_DWORD *)(a1 + 20) = v16;
  }
  else
  {
    v26 = "Structure read out-of-range";
    v27 = 259;
    sub_21967F0(&v25, (__int64 *)&v26, v6, v7);
    v9 = v25;
    *(_BYTE *)(a1 + 24) |= 1u;
    *(_QWORD *)a1 = v9;
  }
  return a1;
}
