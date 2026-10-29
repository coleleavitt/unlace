/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74494
// Address: 0x00074494

//----- (00074494) --------------------------------------------------------
int __fastcall sub_74494(char **a1, int a2)
{
  int v3; // r4
  int v4; // r10
  int v5; // r4
  int v6; // r7
  char *v7; // r0
  const char *v8; // r9
  char *v9; // r1
  char *v10; // r3
  unsigned int v11; // r0
  unsigned int v12; // lr
  __int64 v13; // kr08_8
  int v14; // r2
  int v15; // r3
  char *v16; // r2
  void *v17; // r0
  char *v18; // r3
  int v19; // r9
  int v20; // r5
  int v21; // r8
  void *v22; // r0
  char *v23; // r3
  char *v25; // r0
  size_t n; // [sp+20h] [bp-102Ch]
  int v28; // [sp+24h] [bp-1028h]
  char *v29; // [sp+2Ch] [bp-1020h] BYREF
  int v30; // [sp+30h] [bp-101Ch]
  int v31; // [sp+34h] [bp-1018h]
  __int64 v32; // [sp+38h] [bp-1014h] BYREF
  int v33; // [sp+40h] [bp-100Ch]
  char v34[4]; // [sp+44h] [bp-1008h] BYREF

  v30 = 0;
  v31 = 0;
  v29 = nullptr;
  v3 = sub_742AC(&v29);
  if ( v3 )
  {
    v4 = v30;
    if ( v30 )
    {
      v5 = 0;
      v6 = 0;
      while ( 1 )
      {
        if ( *(_DWORD *)&v29[v5 + 4] )
          v7 = sub_76B98(v34, 4096, *(unsigned __int8 **)&v29[v5], a2, 0);
        else
          v7 = sub_76B98(v34, 4096, (unsigned __int8 *)&dword_8DB98, a2, 0);
        v8 = v7;
        if ( !sub_7756C((int)v7) )
          goto LABEL_6;
        v32 = 0;
        v33 = 0;
        if ( v8 )
        {
          n = strlen(v8);
          LODWORD(v32) = sub_78018((int)&v32, nullptr, n + 1, 1u);
          HIDWORD(v32) = n + 1;
          memmove((void *)v32, v8, n);
          *(_BYTE *)(v32 + n) = 0;
        }
        v10 = a1[1];
        v9 = *a1;
        v11 = (unsigned int)a1[2];
        v12 = (unsigned int)(v10 + 1);
        if ( *a1 > (char *)&v32 || &v32 >= (__int64 *)&v9[12 * v11] )
        {
          if ( v11 < v12 )
          {
            v9 = (char *)sub_78018((int)a1, v9, (unsigned int)(a1[1] + 1), 0xCu);
            v10 = a1[1];
            *a1 = v9;
          }
          v25 = &v9[12 * (_DWORD)v10];
          *(_QWORD *)v25 = v32;
          *((_DWORD *)v25 + 2) = v33;
          ++a1[1];
          goto LABEL_6;
        }
        v13 = v32;
        v32 = 0;
        v14 = v33;
        v33 = 0;
        v28 = v14;
        if ( v11 < v12 )
        {
          v9 = (char *)sub_78018((int)a1, v9, v12, 0xCu);
          v10 = a1[1];
          *a1 = v9;
        }
        v15 = 3 * (_DWORD)v10;
        *(_DWORD *)&v9[4 * v15] = v13;
        v16 = &v9[4 * v15];
        v17 = (void *)v32;
        *((_DWORD *)v16 + 1) = HIDWORD(v13);
        *((_DWORD *)v16 + 2) = v28;
        ++a1[1];
        if ( v17 )
        {
          HIDWORD(v32) = 0;
          ++v6;
          sub_77F70(v17);
          v5 += 12;
          if ( v6 == v4 )
            break;
        }
        else
        {
LABEL_6:
          ++v6;
          v5 += 12;
          if ( v6 == v4 )
            break;
        }
      }
    }
    v3 = a1[1] != nullptr;
  }
  v18 = v29;
  if ( v29 )
  {
    v19 = v30;
    if ( v30 )
    {
      v20 = 0;
      v21 = 0;
      while ( 1 )
      {
        v22 = *(void **)&v18[v20];
        v23 = &v18[v20];
        if ( v22 )
        {
          *((_DWORD *)v23 + 1) = 0;
          sub_77F70(v22);
        }
        ++v21;
        v20 += 12;
        if ( v19 == v21 )
          break;
        v18 = v29;
      }
      v18 = v29;
    }
    v30 = 0;
    sub_77F70(v18);
  }
  return v3;
}
// 8DB98: using guessed type int dword_8DB98;
