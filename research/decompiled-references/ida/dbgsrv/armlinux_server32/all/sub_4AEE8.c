/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AEE8
// Address: 0x0004AEE8

//----- (0004AEE8) --------------------------------------------------------
int __fastcall sub_4AEE8(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        char *a3,
        unsigned __int8 *a4,
        unsigned int a5,
        int a6)
{
  int v7; // r6
  int v10; // r8
  unsigned int v11; // r10
  unsigned __int8 *v12; // r0
  unsigned int v13; // r6
  unsigned __int8 *v14; // r3
  const char *v15; // r0
  const char *v16; // r6
  size_t v17; // r0
  size_t v18; // r4
  unsigned __int8 *v20; // r0
  unsigned __int8 *v21; // r11
  int v22; // r6
  int i; // r7
  unsigned __int8 *v24; // r1
  unsigned __int8 *v25; // r0
  unsigned __int8 *v26; // r0
  unsigned int v27; // r7
  int v28; // r4
  int v29; // r6
  unsigned int v30; // r7
  void *v31; // r0
  int v32; // [sp+14h] [bp-A8h]
  void *ptr; // [sp+24h] [bp-98h] BYREF
  unsigned int v34; // [sp+28h] [bp-94h]
  int v35; // [sp+2Ch] [bp-90h]
  _BYTE v36[80]; // [sp+30h] [bp-8Ch] BYREF
  unsigned __int8 v37[8]; // [sp+80h] [bp-3Ch] BYREF
  int v38; // [sp+88h] [bp-34h]
  int v39; // [sp+8Ch] [bp-30h]
  int v40; // [sp+90h] [bp-2Ch]
  int v41; // [sp+94h] [bp-28h]
  unsigned __int8 v42[8]; // [sp+98h] [bp-24h] BYREF
  int v43; // [sp+A0h] [bp-1Ch]
  int v44; // [sp+A4h] [bp-18h]
  int v45; // [sp+A8h] [bp-14h]
  int v46; // [sp+ACh] [bp-10h]

  v7 = (int)a2;
  if ( a2 )
    v7 = 1;
  if ( a3 )
    v7 = 0;
  v37[0] = 2;
  v39 = 0;
  v38 = 0;
  v40 = 0;
  v41 = 0;
  v10 = a6;
  if ( v7 )
  {
    sub_45B30(v37, a2);
  }
  else if ( sub_49534(v37, (int)a2, a3, 0) )
  {
    goto LABEL_14;
  }
  if ( sub_45BF0(v37, 2) )
  {
    if ( v37[0] == 6 )
    {
      ptr = nullptr;
      v34 = 0;
      v35 = 0;
      if ( a2 )
      {
        v11 = a5 + 1;
        if ( a5 == -1 )
        {
          v22 = 24;
          v21 = nullptr;
        }
        else
        {
          v43 = 0;
          v44 = 0;
          v45 = 0;
          v46 = 0;
          v42[0] = 2;
          v12 = (unsigned __int8 *)sub_78018((int)&ptr, nullptr, a5 + 1, 0x18u);
          v13 = v34;
          v14 = v12;
          ptr = v12;
          if ( v11 > v34 )
          {
            v32 = 24 * v34;
            while ( 1 )
            {
              v20 = &v14[v32];
              *v20 = 2;
              *((_DWORD *)v20 + 2) = 0;
              *((_DWORD *)v20 + 3) = 0;
              *((_DWORD *)v20 + 4) = 0;
              *((_DWORD *)v20 + 5) = 0;
              sub_45B30(&v14[v32], v42);
              ++v13;
              v32 += 24;
              if ( v11 <= v13 )
                break;
              v14 = (unsigned __int8 *)ptr;
            }
          }
          v34 = a5 + 1;
          sub_45758(v42);
          v21 = (unsigned __int8 *)ptr;
          v22 = (int)ptr + 24;
        }
        sub_45B30(v21, a2);
        if ( a5 )
        {
          for ( i = 0; i != a5; ++i )
          {
            v24 = a4;
            v25 = (unsigned __int8 *)v22;
            a4 += 24;
            v22 += 24;
            sub_45B30(v25, v24);
          }
        }
        else
        {
          v11 = 1;
        }
      }
      else
      {
        v11 = a5;
        v21 = a4;
      }
      sub_45A40((int)v36, 0, 0);
      v10 = sub_4A774((int)v36, nullptr, v38, v11, v21, a1, a6);
      sub_46F18((int)v36);
      v26 = (unsigned __int8 *)ptr;
      if ( ptr )
      {
        v27 = v34;
        if ( v34 )
        {
          v28 = 0;
          v29 = 0;
          do
          {
            ++v29;
            sub_45758(&v26[v28]);
            v28 += 24;
            v26 = (unsigned __int8 *)ptr;
          }
          while ( v27 != v29 );
        }
        v34 = 0;
        sub_77F70(v26);
      }
      goto LABEL_18;
    }
    sub_70B98(1541);
  }
LABEL_14:
  sub_49218(a1);
  if ( a6 )
  {
    v15 = sub_79980(-1);
    v16 = v15;
    if ( v15 && (v17 = strlen(v15), (v18 = v17) != 0) )
    {
      v30 = v17 + 1;
      v31 = *(void **)a6;
      if ( v30 > *(_DWORD *)(a6 + 8) )
      {
        v31 = sub_78018(a6, *(void **)a6, v30, 1u);
        *(_DWORD *)a6 = v31;
      }
      *(_DWORD *)(a6 + 4) = v30;
      memmove(v31, v16, v18);
      v10 = 0;
      *(_BYTE *)(*(_DWORD *)a6 + v18) = 0;
    }
    else
    {
      *(_DWORD *)(a6 + 4) = 0;
      v10 = 0;
    }
  }
LABEL_18:
  sub_45758(v37);
  return v10;
}
