/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_66E2C
// Address: 0x00066E2C

//----- (00066E2C) --------------------------------------------------------
int __fastcall sub_66E2C(int a1, int *a2)
{
  int (*v4)(void); // r2
  int v5; // r6
  int v6; // r11
  int v7; // r4
  int v8; // r5
  int v9; // r3
  int (*v10)(); // r2
  int v11; // r4
  const char *v12; // r0
  const char *v13; // r4
  size_t v14; // r0
  size_t v15; // r5
  unsigned int v17; // r6
  void *v18; // r0
  const char *v19; // r1
  int v20; // [sp+0h] [bp-Ch] BYREF

  v4 = *(int (**)(void))(*(_DWORD *)a1 + 12);
  if ( (char *)v4 == (char *)sub_66D7C )
    v5 = *(_DWORD *)(a1 + 52);
  else
    v5 = v4();
  if ( !v5 )
    return -1;
  v6 = *(unsigned __int8 *)(a1 + 4);
  if ( *(_BYTE *)(a1 + 4) )
    return -1;
  sub_67AF0((int)a2);
  v7 = a2[1];
  v8 = *a2;
  sub_669BC(&v20, v5, v6, v7);
  if ( v7 > 0 )
  {
    while ( 1 )
    {
      v9 = sub_66518(v5);
      if ( v9 < 0 )
        break;
      v7 -= v9;
      v8 += v9;
      sub_669E4(&v20);
      if ( v7 <= 0 )
        goto LABEL_18;
    }
    v10 = *(int (**)())(*(_DWORD *)a1 + 24);
    if ( v10 != nullsub_7 )
      ((void (__fastcall *)(int))v10)(a1);
    *(_BYTE *)(a1 + 4) = 1;
    if ( sub_66528(v5) == -15059582 )
    {
      v11 = -1;
    }
    else
    {
      v12 = (const char *)sub_66530(v5);
      v13 = v12;
      if ( v12 && (v14 = strlen(v12), (v15 = v14) != 0) )
      {
        v17 = v14 + 1;
        v18 = *(void **)(a1 + 8);
        if ( v17 > *(_DWORD *)(a1 + 16) )
        {
          v18 = sub_77EB0(a1 + 8, *(void **)(a1 + 8), v17, 1u);
          *(_DWORD *)(a1 + 8) = v18;
        }
        v19 = v13;
        *(_DWORD *)(a1 + 12) = v17;
        v11 = -1;
        memmove(v18, v19, v15);
        *(_BYTE *)(*(_DWORD *)(a1 + 8) + v15) = 0;
      }
      else
      {
        v11 = -1;
        *(_DWORD *)(a1 + 12) = 0;
      }
    }
  }
  else
  {
LABEL_18:
    v11 = 0;
  }
  sub_669D4(&v20);
  return v11;
}
// 577A8: using guessed type int nullsub_7();
