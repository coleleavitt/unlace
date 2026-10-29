void __fastcall sub_1847C80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rbp
  unsigned int v8; // edi
  __int64 v9; // r9
  unsigned int v10; // edx
  __int64 *v11; // rax
  __int64 v12; // r8
  int v13; // eax
  int v14; // r8d
  __int64 v15; // r9
  unsigned int v16; // edx
  __int64 v17; // rdi
  int v18; // r11d
  __int64 *v19; // r12
  int v20; // edx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 *v23; // r10
  int v24; // r11d
  int v25; // [rsp+0h] [rbp-3Ch]
  int v26; // [rsp+0h] [rbp-3Ch]
  __int64 v27; // [rsp+4h] [rbp-38h] BYREF
  __int64 *v28; // [rsp+Ch] [rbp-30h] BYREF

  if ( a2 )
  {
    v6 = (__int64 *)(a1 + 4192);
    v27 = a2;
    *(_BYTE *)(a2 + 97) = *(_BYTE *)(a2 + 97) & 0xF9 | 2;
    v8 = *(_DWORD *)(a1 + 4208);
    if ( v8 )
    {
      v9 = *(_QWORD *)(a1 + 4192);
      v10 = (v8 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v11 = (__int64 *)(v9 + 16LL * v10);
      v12 = *v11;
      if ( a2 == *v11 )
      {
LABEL_4:
        *((_DWORD *)v11 + 2) = a4;
        return;
      }
      v18 = 1;
      v19 = nullptr;
      if ( v12 != -4096 )
      {
        while ( 1 )
        {
          if ( !v19 && v12 == -8192 )
            v19 = v11;
          v10 = (v8 - 1) & (v18 + v10);
          v11 = (__int64 *)(v9 + 16LL * v10);
          v12 = *v11;
          if ( a2 == *v11 )
            goto LABEL_4;
          if ( v12 == -4096 )
          {
            if ( v19 )
              v11 = v19;
            break;
          }
          ++v18;
        }
      }
      v20 = *(_DWORD *)(a1 + 4200);
      a5 = 3 * v8;
      v28 = v11;
      a3 = (unsigned int)(v20 + 1);
      a6 = (unsigned int)(4 * a3);
      if ( (unsigned int)a6 < (unsigned int)a5 )
      {
        v21 = v8 - *(_DWORD *)(a1 + 4204) - (unsigned int)a3;
        v22 = v8 >> 3;
        if ( (unsigned int)v21 <= (unsigned int)v22 )
        {
          v26 = a4;
          sub_1847A80(v6, v8, a3, a4, v21, v22);
          sub_183FA40(v6, &v27, &v28);
          a2 = v27;
          LODWORD(a4) = v26;
          LODWORD(a3) = *(_DWORD *)(a1 + 4200) + 1;
          v11 = v28;
          v17 = *v28;
        }
        else
        {
          v17 = *v11;
        }
LABEL_10:
        *(_DWORD *)(a1 + 4200) = a3;
        if ( v17 != -4096 )
          --*(_DWORD *)(a1 + 4204);
        *v11 = a2;
        *((_DWORD *)v11 + 2) = 0;
        goto LABEL_4;
      }
    }
    else
    {
      v28 = nullptr;
    }
    v25 = a4;
    sub_1847A80(v6, 2 * v8, a3, a4, a5, a6);
    v13 = *(_DWORD *)(a1 + 4208);
    LODWORD(a4) = v25;
    if ( v13 )
    {
      a2 = v27;
      v14 = v13 - 1;
      v15 = *(_QWORD *)(a1 + 4192);
      v16 = (v13 - 1) & (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4));
      v11 = (__int64 *)(v15 + 16LL * v16);
      v17 = *v11;
      if ( v27 != *v11 && v17 != -4096 )
      {
        v23 = (__int64 *)(v15 + 16LL * (v14 & (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4))));
        v24 = 1;
        v11 = nullptr;
        while ( 1 )
        {
          if ( !v11 && v17 == -8192 )
            v11 = v23;
          v16 = v14 & (v24 + v16);
          v23 = (__int64 *)(v15 + 16LL * v16);
          v17 = *v23;
          if ( v27 == *v23 )
            goto LABEL_34;
          if ( v17 == -4096 )
            break;
          ++v24;
        }
        if ( !v11 )
        {
LABEL_34:
          v11 = (__int64 *)(v15 + 16LL * v16);
          goto LABEL_9;
        }
        v17 = *v11;
      }
LABEL_9:
      LODWORD(a3) = *(_DWORD *)(a1 + 4200) + 1;
    }
    else
    {
      a2 = v27;
      v17 = 0x10102464C457FLL;
      LODWORD(a3) = *(_DWORD *)(a1 + 4200) + 1;
      v11 = nullptr;
    }
    goto LABEL_10;
  }
}
