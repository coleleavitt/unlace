__int64 __fastcall sub_89C400(__int64 a1, unsigned __int8 **a2, unsigned __int8 *a3, int a4)
{
  unsigned __int8 *v6; // rdx
  unsigned __int8 v7; // al
  int v10; // ebx
  unsigned __int8 *v11; // rbp
  unsigned __int8 *v12; // rax
  unsigned int v13; // ecx
  __int64 v15; // rsi
  unsigned __int8 *v16; // rcx
  int v17; // eax
  unsigned __int8 *v18; // rdi
  unsigned __int8 i; // al
  unsigned __int8 *v20; // rax
  int v21; // [rsp+18h] [rbp-50h] BYREF
  unsigned int v22; // [rsp+1Ch] [rbp-4Ch] BYREF
  unsigned __int8 *v23[9]; // [rsp+20h] [rbp-48h] BYREF

  v23[1] = (unsigned __int8 *)__readfsqword(0x28u);
  v6 = *a2;
  v23[0] = v6;
  if ( v6 >= a3 )
  {
LABEL_13:
    v13 = -58;
    goto LABEL_14;
  }
  v7 = *v6;
  v10 = 0;
  v11 = a3 - 1;
  while ( v7 != 125 )
  {
LABEL_4:
    switch ( v7 )
    {
      case ':':
        v12 = v23[0];
        v13 = a4 | v10;
        if ( !(a4 | v10) )
        {
          v6 = v23[0];
          goto LABEL_14;
        }
        goto LABEL_9;
      case '$':
        if ( v6 >= v11 || v6[1] != 123 )
        {
LABEL_8:
          v12 = v23[0];
LABEL_9:
          v6 = v12 + 1;
          v23[0] = v12 + 1;
          if ( v12 + 1 < a3 )
            goto LABEL_10;
          goto LABEL_13;
        }
        v16 = v6 + 2;
        ++v10;
        v23[0] = v6 + 2;
        if ( v6 + 2 >= a3 )
        {
LABEL_39:
          v6 = v16;
          v13 = -58;
          goto LABEL_14;
        }
LABEL_22:
        v7 = v6[2];
        v6 = v16;
        break;
      case '\\':
        if ( v6 < v11 && (unsigned __int8)(v6[1] - 76) <= 0x29u )
        {
          v15 = 0x20100000201LL;
          if ( _bittest64(&v15, (unsigned int)v6[1] - 76) )
            goto LABEL_21;
        }
        v23[0] = v6 + 1;
        v17 = sub_85D440(
                v23,
                a3,
                &v22,
                &v21,
                *(_DWORD *)(a1 + 96),
                *(_DWORD *)(a1 + 100),
                *(unsigned __int16 *)(a1 + 136),
                0,
                0);
        v6 = v23[0];
        v18 = --v23[0];
        if ( v21 )
          goto LABEL_41;
        if ( (unsigned int)v17 > 0x1B )
        {
          if ( v17 >= 0 )
          {
LABEL_41:
            v6 = v18;
            v13 = -57;
            goto LABEL_14;
          }
        }
        else if ( ((1LL << v17) & 0xA200021) == 0 )
        {
          if ( v17 != 26 )
            goto LABEL_41;
          v23[0] = v6;
          if ( v6 >= a3 )
            goto LABEL_13;
          for ( i = *v6; i != 92 || v6 >= v11 || v6[1] != 69; i = v20[1] )
          {
            v20 = v23[0];
            v6 = v23[0] + 1;
            v23[0] = v6;
            if ( v6 >= a3 )
              goto LABEL_13;
          }
LABEL_21:
          v16 = v6 + 2;
          v23[0] = v6 + 2;
          if ( v6 + 2 >= a3 )
            goto LABEL_39;
          goto LABEL_22;
        }
        v23[0] = v6;
        if ( v6 >= a3 )
          goto LABEL_13;
        v7 = *v6;
        break;
      default:
        goto LABEL_8;
    }
  }
  while ( 1 )
  {
    v12 = v23[0];
    if ( !v10 )
      break;
    v6 = v23[0] + 1;
    --v10;
    ++v23[0];
    if ( v12 + 1 >= a3 )
      goto LABEL_13;
LABEL_10:
    v7 = v12[1];
    if ( v7 != 125 )
      goto LABEL_4;
  }
  v6 = v23[0];
  v13 = 0;
LABEL_14:
  *a2 = v6;
  return v13;
}
