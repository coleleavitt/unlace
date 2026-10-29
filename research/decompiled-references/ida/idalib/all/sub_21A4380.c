__int64 __fastcall sub_21A4380(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 v4; // rbx
  int v5; // r12d
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // esi
  __int64 (__fastcall *v12)(__int64, unsigned int); // rdx
  __int64 (__fastcall *v13)(__int64); // rax
  char v14; // al
  char v15; // al
  unsigned int v16; // edx
  unsigned int v17; // ecx
  __int64 v18; // rdi
  unsigned int v19; // r12d
  unsigned int v20; // edx
  unsigned int v21; // ecx
  __int64 v22; // rdi
  unsigned int v23; // r12d
  unsigned int v24; // [rsp+8h] [rbp-60h]
  __int64 v25[2]; // [rsp+10h] [rbp-58h] BYREF
  char v26; // [rsp+20h] [rbp-48h]

  v4 = a2[70] + 144 * HIDWORD(a3);
  v5 = *(_DWORD *)(v4 + 20) & 0x10;
  if ( !v5 )
  {
    (*(void (__fastcall **)(__int64 *))(*a2 + 128))(v25);
    if ( (v26 & 1) != 0 )
    {
      v9 = v25[0];
      *(_BYTE *)(a1 + 8) |= 1u;
      v25[0] = 0;
      *(_QWORD *)a1 = v9;
LABEL_6:
      sub_20CE610(v25);
      return a1;
    }
    v10 = *a2;
    v11 = v25[0];
    v12 = *(__int64 (__fastcall **)(__int64, unsigned int))(*a2 + 152);
    if ( v12 == sub_21A2C60 )
    {
      v13 = *(__int64 (__fastcall **)(__int64))(v10 + 448);
      if ( v13 == sub_21A2860 )
      {
        v14 = *((_BYTE *)a2 + 612);
      }
      else
      {
        v24 = v25[0];
        v14 = v13((__int64)a2);
        v11 = v24;
      }
      if ( !v14 && !*((_BYTE *)a2 + 613) )
        v5 = *(_DWORD *)(a2[9] + 80LL * v11 + 4);
    }
    else
    {
      v5 = v12((__int64)a2, v25[0]);
    }
    v15 = *(_BYTE *)(v4 + 16);
    if ( v15 )
    {
      if ( v15 == 2 )
      {
        v20 = *(_DWORD *)(v4 + 96);
        v21 = *((_DWORD *)a2 + 168);
        if ( v20 >= v21 )
        {
          v22 = a2[47];
          if ( v20 < (unsigned __int64)v21 - 0x71C71C71C71C71C7LL * ((a2[48] - v22) >> 3) )
          {
            v23 = *(_DWORD *)(v22 + 72LL * (v20 - v21) + 64) + v5;
            *(_BYTE *)(a1 + 8) &= ~1u;
            *(_QWORD *)a1 = v23;
            goto LABEL_6;
          }
        }
      }
    }
    else
    {
      v16 = *(_DWORD *)(v4 + 96);
      v17 = *((_DWORD *)a2 + 170);
      if ( v16 >= v17 )
      {
        v18 = a2[67];
        if ( v16 < (unsigned __int64)v17 + ((a2[68] - v18) >> 7) )
        {
          v19 = *(_DWORD *)(v18 + ((unsigned __int64)(v16 - v17) << 7) + 48) + v5;
          *(_BYTE *)(a1 + 8) &= ~1u;
          *(_QWORD *)a1 = v19;
          goto LABEL_6;
        }
      }
    }
    sub_21A2100(a1, a2, a3);
    goto LABEL_6;
  }
  *(_BYTE *)(a1 + 8) &= ~1u;
  *(_QWORD *)a1 = 0;
  return a1;
}
