__int64 __fastcall sub_745260(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // rsi
  unsigned __int16 *v4; // rcx
  unsigned int v5; // r9d
  __int64 v6; // r10
  unsigned int v7; // r8d
  int v8; // edx
  __int64 v9; // rdx
  int v10; // ebx
  unsigned __int16 *v11; // rax
  __int64 v12; // rdx
  int v13; // ebp
  int v14; // edx
  __int64 v16; // rdi
  __int64 v17; // rdx
  unsigned __int16 *v18; // rbx
  unsigned __int64 v19; // r12
  unsigned int v20; // ebp
  __int64 v21; // r13
  __int64 v22; // rdi
  int v23; // r14d
  __int64 v24; // rax
  int v25; // edx
  unsigned __int8 v26; // r11
  unsigned __int8 v27; // di
  int v28; // eax

  v3 = *a2;
  if ( a3 > 1 )
  {
    v4 = (unsigned __int16 *)(v3 + 12);
    v5 = 0;
    v6 = v3 + 6LL * (unsigned int)(a3 - 2) + 18;
    v7 = *(_DWORD *)(v3 - 8);
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = *(v4 - 1);
        v10 = *(v4 - 3);
        if ( (unsigned int)v9 >= v7
          || (v11 = (unsigned __int16 *)(v3 + v9),
              v12 = *(unsigned __int16 *)(v3 + v9),
              v13 = *v11,
              (int)v11 + (int)v12 + 3 - (int)v3 >= v7)
          || (v14 = v13 + *(unsigned __int16 *)((char *)v11 + v12 + 2) + 4, (int)v11 + v14 - 1 - (int)v3 >= v7) )
        {
LABEL_31:
          sub_743130();
        }
        if ( (unsigned int)(v10 + v14) <= 0x60D )
          break;
        v4 += 3;
        v5 |= 0x4000u;
        if ( v4 == (unsigned __int16 *)v6 )
          return v5;
      }
      v8 = *v4;
      if ( (unsigned __int16)v8 >= (unsigned __int16)v10 )
      {
        v16 = v4[2];
        v17 = (unsigned int)(v8 - v10);
        if ( (unsigned int)v16 >= v7 )
          goto LABEL_31;
        v18 = (unsigned __int16 *)(v3 + v16);
        v19 = *(unsigned __int16 *)(v3 + v16);
        if ( (int)v16 + (int)v19 + 3 >= v7
          || (unsigned int)v16 + *(unsigned __int16 *)(v3 + v16 + v19 + 2) + (_DWORD)v19 + 4 - 1 >= v7 )
        {
          goto LABEL_31;
        }
        v20 = v13 - v17;
        if ( (v20 & 0x80000000) == 0 )
        {
          v21 = (__int64)v11 + v17 + 2;
          v22 = v20;
          if ( v19 <= v20 )
            v22 = *v18;
          v23 = v22;
          if ( v22 )
          {
            v24 = 0;
            v25 = 1;
            while ( 1 )
            {
              v26 = *(_BYTE *)(v21 + v24);
              v27 = *((_BYTE *)v18 + v24 + 2);
              if ( v26 != v27 )
                break;
              ++v25;
              ++v24;
              if ( v23 < v25 )
                goto LABEL_26;
            }
            if ( v26 < v27 )
              v25 = -v25;
            if ( v25 < 0 )
              goto LABEL_4;
            v28 = v25 == 0 ? 256 : 128;
          }
          else
          {
LABEL_26:
            if ( v19 == v20 )
            {
              v28 = 256;
            }
            else
            {
              v28 = 128;
              if ( v19 >= v20 )
                goto LABEL_4;
            }
          }
          v5 |= v28;
        }
      }
LABEL_4:
      v4 += 3;
      if ( v4 == (unsigned __int16 *)v6 )
        return v5;
    }
  }
  return 0;
}
