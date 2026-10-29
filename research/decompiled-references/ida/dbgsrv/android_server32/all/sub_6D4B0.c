/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6D4B0
// Address: 0x0006D4B0

//----- (0006D4B0) --------------------------------------------------------
int __fastcall sub_6D4B0(int a1, int a2, int a3)
{
  int v6; // r7
  int v7; // r0
  int v8; // r6
  const char *v10; // r0
  const char *v11; // r4
  void **v12; // r6
  size_t v13; // r0
  size_t v14; // r5
  size_t v15; // r7
  void *v16; // r0
  int v17; // [sp+8h] [bp-20h]
  int v18; // [sp+18h] [bp-10h]
  int v19; // [sp+1Ch] [bp-Ch]
  int v20; // [sp+20h] [bp-8h] BYREF

  v19 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 12))(a1);
  sub_6CD00(&v20, v19, 1, a3);
  v18 = 0;
  if ( !a3 )
    goto LABEL_9;
  v17 = a1;
  v18 = -1;
  while ( 1 )
  {
    v6 = -1;
    if ( sub_6C6F4(v19) < 1 )
      break;
    v7 = sub_6C6D6(v19);
    v6 = v7;
    if ( v7 < 1 )
      break;
    a2 += v7;
    a3 -= v7;
    sub_6CD2E(&v20);
LABEL_7:
    if ( !a3 )
    {
      v18 = 0;
      goto LABEL_9;
    }
  }
  v8 = sub_6C6E0(v19);
  if ( v8 == -21015 )
    goto LABEL_7;
  (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 24))(v17);
  if ( v6 )
  {
    *(_BYTE *)(v17 + 4) = 1;
    if ( v8 != -15059582 )
    {
      v10 = (const char *)sub_6C6EA(v19);
      v11 = v10;
      v12 = (void **)(v17 + 8);
      if ( v10 && (v13 = strlen(v10)) != 0 )
      {
        v14 = v13;
        v15 = v13 + 1;
        if ( *(_DWORD *)(v17 + 16) >= v13 + 1 )
        {
          v16 = *v12;
        }
        else
        {
          v16 = qvector_reserve((int)v12, *v12, v13 + 1, 1u);
          *v12 = v16;
        }
        *(_DWORD *)(v17 + 12) = v15;
        memmove(v16, v11, v14);
        *(_BYTE *)(*(_DWORD *)(v17 + 8) + v14) = 0;
      }
      else
      {
        *(_DWORD *)(v17 + 12) = 0;
      }
    }
  }
LABEL_9:
  sub_6CD16(&v20);
  return v18;
}
