/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47CE80
// Address: 0x0047CE80

//----- (0047CE80) --------------------------------------------------------
int __usercall sub_47CE80@<eax>(int a1@<ebx>, int a2@<edi>, const CHAR **a3, _DWORD *a4)
{
  int v4; // esi
  const CHAR **v5; // esi
  unsigned int v6; // ebx
  LPVOID *v7; // edi
  CHAR *v8; // eax
  unsigned int v9; // ecx
  const CHAR *v10; // eax
  const CHAR *v11; // ecx
  unsigned int v12; // edx
  unsigned int v13; // esi
  const char **v14; // eax
  int i; // edx
  const char *v16; // ecx
  char *v17; // eax
  char *v18; // esi
  char *v19; // ecx
  const char **v20; // eax
  int v21; // eax
  unsigned int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // esi
  LPVOID lpMem; // [esp+4h] [ebp-28h] BYREF
  const char **v27; // [esp+8h] [ebp-24h]
  int v28; // [esp+Ch] [ebp-20h]
  LPVOID *v29; // [esp+10h] [ebp-1Ch]
  char *v30; // [esp+14h] [ebp-18h]
  const char *v31; // [esp+18h] [ebp-14h]
  const char *v32; // [esp+1Ch] [ebp-10h]
  unsigned int v33; // [esp+20h] [ebp-Ch]
  int v34; // [esp+24h] [ebp-8h]
  unsigned int v35; // [esp+28h] [ebp-4h] BYREF

  if ( a4 )
  {
    v5 = a3;
    v6 = 0;
    *a4 = 0;
    v7 = nullptr;
    v8 = (CHAR *)*a3;
    v9 = 0;
    lpMem = nullptr;
    v27 = nullptr;
    v28 = 0;
    if ( v8 )
    {
      while ( 1 )
      {
        strcpy((char *)&v35, "*?");
        LOBYTE(v10) = sub_474CD0(v8, &v35);
        v11 = *v5;
        if ( v10 )
        {
          v34 = sub_47D120(0, v11, v10, &lpMem);
          v4 = v34;
        }
        else
        {
          v4 = sub_47D06F(v11, 0, 0, (int)&lpMem);
          v34 = v4;
        }
        if ( v4 )
          break;
        v5 = a3 + 1;
        a3 = v5;
        v8 = (CHAR *)*v5;
        if ( !*v5 )
        {
          v7 = (LPVOID *)lpMem;
          v9 = (unsigned int)v27;
          goto LABEL_10;
        }
      }
      v7 = (LPVOID *)lpMem;
    }
    else
    {
LABEL_10:
      v35 = 0;
      v34 = (int)v7;
      v12 = ((int)(v9 - (_DWORD)v7) >> 2) + 1;
      v33 = v12;
      v13 = v9 >= (unsigned int)v7 ? (v9 - (unsigned int)v7 + 3) >> 2 : 0;
      if ( v13 )
      {
        v14 = (const char **)v7;
        for ( i = 0; i != v13; ++i )
        {
          v16 = *v14;
          v32 = *v14 + 1;
          v6 += &v16[strlen(v16) + 1] - v32 + 1;
          v14 = (const char **)(v34 + 4);
          v34 += 4;
        }
        v12 = v33;
        v35 = v6;
        v6 = 0;
      }
      v17 = (char *)sub_476A9F(v12, v35, 1u);
      v18 = v17;
      if ( v17 )
      {
        v34 = (int)v7;
        v19 = &v17[4 * v33];
        v30 = v19;
        v20 = (const char **)v7;
        v33 = (unsigned int)&v18[4 * v33];
        if ( v7 != (LPVOID *)v27 )
        {
          v29 = (LPVOID *)(v18 - (char *)v7);
          do
          {
            v31 = *v20;
            v32 = (const char *)(strlen(v31) + 1);
            if ( sub_46C902((int)v7, v19, v35 + v30 - v19, (int)v31, (int)v32) )
            {
              sub_467F04(0, (int)v7);
              __debugbreak();
            }
            v21 = v34;
            v22 = v33;
            *(LPVOID *)((char *)v29 + v34) = (LPVOID)v33;
            v20 = (const char **)(v21 + 4);
            v19 = (char *)&v32[v22];
            v33 = (unsigned int)v19;
            v34 = (int)v20;
          }
          while ( v20 != v27 );
        }
        v34 = 0;
        *a4 = v18;
        v4 = 0;
      }
      else
      {
        v4 = -1;
        v34 = -1;
      }
      sub_479216(nullptr);
    }
    v29 = v7;
    v23 = (unsigned int)((char *)v27 - (char *)v7 + 3) >> 2;
    v30 = v27 >= (const char **)v7 ? (char *)v23 : nullptr;
    if ( v30 )
    {
      v24 = v27 >= (const char **)v7 ? v23 : 0;
      do
      {
        sub_479216(*v7);
        ++v6;
        ++v7;
      }
      while ( v6 != v24 );
      v7 = (LPVOID *)lpMem;
      v4 = v34;
    }
    sub_479216(v7);
  }
  else
  {
    v4 = 22;
    *sub_46B984() = 22;
    sub_467EF4(a1, a2);
  }
  return v4;
}
// 47CED9: variable 'v10' is possibly undefined
