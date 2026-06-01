/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_438C30
// Address: 0x00438C30

//----- (00438C30) --------------------------------------------------------
unsigned int __cdecl sub_438C30(unsigned int a1, int a2, unsigned __int8 *a3)
{
  unsigned __int8 *v3; // ebx
  unsigned int v4; // edi
  unsigned int v5; // esi
  CHAR *v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  unsigned int v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // eax
  unsigned int v17; // edi
  int v18; // eax
  unsigned int v19; // eax
  char v21; // [esp-4h] [ebp-3Ch]
  CHAR *v22; // [esp+10h] [ebp-28h] BYREF
  int v23; // [esp+14h] [ebp-24h]
  unsigned __int8 *v24; // [esp+1Ch] [ebp-1Ch] BYREF
  int v25; // [esp+20h] [ebp-18h]
  unsigned int v26; // [esp+24h] [ebp-14h]
  char v27; // [esp+2Bh] [ebp-Dh]
  int v28; // [esp+34h] [ebp-4h]

  v3 = a3;
  if ( !a3 )
    return 0;
  v4 = sub_45A040((int *)&a3);
  if ( !v4 )
    return 0;
  v5 = 0;
  sub_41BB70(&v22, a1, a2 - a1);
  v6 = (CHAR *)MultiByteStr;
  v28 = 0;
  if ( v23 )
    v6 = v22;
  v7 = sub_45A380(v6);
  LOBYTE(v25) = 0;
  v26 = v7 + 1;
  v27 = 0;
  if ( v4 >= 0x30 && v4 <= 0x39 )
    goto LABEL_15;
  if ( v4 == 45 || v4 == 43 )
  {
    if ( v3 == (unsigned __int8 *)a1 )
      goto LABEL_15;
    a3 = v3;
    if ( !a1 )
    {
      if ( byte_4B70F0 )
        __debugbreak();
      sub_4533F0(1834);
    }
    sub_45A2D0(nullptr, &a3, a1);
    v8 = sub_45A040((int *)&a3);
    if ( sub_439980(v8) )
      goto LABEL_15;
  }
  if ( v4 == 101 || v4 == 69 || v4 == 46 )
  {
LABEL_15:
    v5 = 1;
    v24 = v3;
    HIBYTE(a3) = v4 == 46;
    sub_45A590(&v24, 1);
    v9 = sub_45A040((int *)&v24);
    if ( v4 == 48 )
    {
      if ( v9 != 120 && v9 != 88 )
        goto LABEL_20;
      v24 = v3;
      sub_45A590(&v24, 2);
      v10 = sub_45A040((int *)&v24);
      if ( !sub_439980(v10) )
      {
        LOBYTE(v25) = 1;
        v5 = 2;
LABEL_20:
        v11 = v26;
        goto LABEL_21;
      }
    }
    else
    {
      if ( v4 != 43 && v4 != 45 && v4 != 101 && v4 != 69 )
        goto LABEL_20;
      v11 = v26;
      if ( v26 > 1 )
      {
        v15 = sub_438BC0(v3, 1, 0);
        if ( !sub_439980(v15) )
        {
LABEL_21:
          if ( v5 < v11 )
          {
            while ( 1 )
            {
              v12 = sub_438BC0(v3, v5, 0);
              if ( sub_439980(v12) )
                break;
              v13 = sub_438BC0(v3, v5, 0);
              if ( sub_439950(v13, v25) )
              {
                ++v5;
              }
              else if ( v14 == 46 )
              {
                if ( HIBYTE(a3) )
                  goto LABEL_49;
                ++v5;
                HIBYTE(a3) = 1;
              }
              else
              {
                if ( v27 || v14 != 101 && v14 != 69 )
                {
                  if ( v14 == 76 )
                  {
                    if ( v5 )
                    {
                      v17 = v5 + 1;
                      if ( v5 + 1 >= v26 || (v18 = sub_438BC0(v3, v5 + 1, 0), sub_439980(v18)) )
                      {
                        v21 = v25;
                        v19 = sub_438BC0(v3, v5 - 1, a1);
                        if ( sub_439950(v19, v21) )
                          goto LABEL_50;
                      }
                    }
                  }
                  goto LABEL_49;
                }
                v16 = sub_438BC0(v3, ++v5, 0);
                if ( v16 == 43 || v16 == 45 )
                  ++v5;
                v27 = 1;
              }
              if ( v5 >= v11 )
                goto LABEL_51;
            }
          }
          goto LABEL_51;
        }
      }
    }
LABEL_49:
    v17 = 0;
LABEL_50:
    v5 = v17;
  }
LABEL_51:
  v28 = 6;
  if ( v22 )
  {
    v23 = 0;
    sub_453A20(v22);
  }
  return v5;
}
// 438DEE: variable 'v14' is possibly undefined
// 4B70F0: using guessed type char byte_4B70F0;
