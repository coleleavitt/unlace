void __fastcall sub_2034DD0(__int64 a1)
{
  __int64 *v2; // r12
  __int64 *v3; // r13
  __int64 *v4; // rbx
  int v5; // r14d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // esi
  __int64 v11; // r8
  unsigned int v12; // edx
  __int64 *v13; // rax
  __int64 v14; // rdi
  int v15; // r10d
  __int64 *v16; // r11
  int v17; // edx
  bool v18; // zf
  __int64 *v19; // [rsp+0h] [rbp-68h]
  __int64 v20; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v21[8]; // [rsp+28h] [rbp-40h] BYREF

  if ( *(_QWORD *)a1 )
  {
    sub_20C8C30(a1 + 8, *(_QWORD *)a1, 0);
    v2 = *(__int64 **)(a1 + 104);
    v3 = *(__int64 **)(a1 + 112);
    *(_QWORD *)a1 = 0;
    if ( v2 != v3 )
    {
      v4 = v2;
      v5 = 0;
      v19 = (__int64 *)(a1 + 136);
      while ( 1 )
      {
        v20 = *v4;
        if ( (*(_BYTE *)(v20 + 9) & 4) != 0 )
          goto LABEL_5;
        sub_20C3250();
        if ( v6 )
        {
          *v2++ = v20;
LABEL_5:
          if ( v3 == ++v4 )
            goto LABEL_11;
        }
        else
        {
          v10 = *(_DWORD *)(a1 + 152);
          if ( !v10 )
          {
            v21[0] = 0;
            goto LABEL_22;
          }
          v7 = v20;
          v9 = v10 - 1;
          v11 = *(_QWORD *)(a1 + 136);
          v12 = v9 & (((unsigned int)v20 >> 9) ^ ((unsigned int)v20 >> 4));
          v13 = (__int64 *)(v11 + 16LL * v12);
          v14 = *v13;
          if ( *v13 != v20 )
          {
            v15 = 1;
            v16 = nullptr;
            if ( v14 != -4096 )
            {
              while ( 1 )
              {
                if ( v14 == -8192 && !v16 )
                  v16 = v13;
                v12 = v9 & (v15 + v12);
                v13 = (__int64 *)(v11 + 16LL * v12);
                v14 = *v13;
                if ( v20 == *v13 )
                  goto LABEL_10;
                if ( v14 == -4096 )
                {
                  if ( v16 )
                    v13 = v16;
                  break;
                }
                ++v15;
              }
            }
            v17 = *(_DWORD *)(a1 + 144);
            v21[0] = v13;
            v6 = (unsigned int)(v17 + 1);
            v8 = (unsigned int)(4 * v6);
            if ( (unsigned int)v8 < 3 * v10 )
            {
              v8 = v10 >> 3;
              if ( v10 - *(_DWORD *)(a1 + 148) - (unsigned int)v6 > (unsigned int)v8 )
              {
LABEL_18:
                v18 = *v13 == -4096;
                *(_DWORD *)(a1 + 144) = v6;
                if ( !v18 )
                  --*(_DWORD *)(a1 + 148);
                *v13 = v7;
                *((_DWORD *)v13 + 2) = 0;
                goto LABEL_10;
              }
LABEL_23:
              sub_2034BD0(v19, v10, v6, v7, v8, v9);
              sub_20330A0(v19, &v20, v21);
              v7 = v20;
              LODWORD(v6) = *(_DWORD *)(a1 + 144) + 1;
              v13 = (__int64 *)v21[0];
              goto LABEL_18;
            }
LABEL_22:
            v10 *= 2;
            goto LABEL_23;
          }
LABEL_10:
          ++v4;
          *((_DWORD *)v13 + 2) = v5++;
          if ( v3 == v4 )
          {
LABEL_11:
            if ( v2 != *(__int64 **)(a1 + 112) )
              *(_QWORD *)(a1 + 112) = v2;
            return;
          }
        }
      }
    }
  }
}
