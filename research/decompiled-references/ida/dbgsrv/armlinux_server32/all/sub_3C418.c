/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3C418
// Address: 0x0003C418

//----- (0003C418) --------------------------------------------------------
int __fastcall sub_3C418(_DWORD *a1, int a2, void **a3)
{
  int result; // r0
  void *v5; // r0
  int v8; // r8
  const char *v9; // r0
  int v10; // r2
  unsigned int v11; // r6
  int v12; // r2
  const void *v13; // r9
  size_t v14; // r8
  void *v15; // r0
  int v16; // r10
  size_t v17; // r7
  void *v18; // r1
  int *v19; // r0
  unsigned int v20; // r10
  unsigned int v21; // r9
  void *v22; // r1
  unsigned int v23; // r6
  void *v24; // r1
  int v25; // [sp+4h] [bp-14h] BYREF
  void *ptr; // [sp+8h] [bp-10h] BYREF
  int v27; // [sp+Ch] [bp-Ch]
  int v28; // [sp+10h] [bp-8h]

  result = 1428;
  if ( a3 )
  {
    v5 = *a3;
    if ( *a3 )
    {
      a3[1] = nullptr;
      sub_77F70(v5);
      *a3 = nullptr;
      a3[2] = nullptr;
    }
    result = sub_70B7C();
    v8 = result;
    if ( result )
    {
      v9 = (const char *)sub_4BBE8(a1, &v25, nullptr, 0);
      v10 = v25;
      if ( v25 != -1 )
      {
        if ( v9 )
        {
          sub_188E0((int)a3, "%s", v9);
          v10 = v25;
        }
        v11 = (unsigned int)a3[1];
        if ( v10 )
        {
          if ( v11 > 1 )
          {
            v24 = *a3;
            if ( v11 + 1 > (unsigned int)a3[2] )
            {
              v24 = sub_78018((int)a3, v24, v11 + 1, 1u);
              *a3 = v24;
            }
            a3[1] = (void *)(v11 + 1);
            *((_BYTE *)v24 + v11 - 1) = 44;
            *((_BYTE *)*a3 + v11) = 0;
            v12 = v25;
          }
          else
          {
            v12 = v10 - 1;
            v25 = v12;
          }
          sub_34260((int)a3, "%d", v12);
          v11 = (unsigned int)a3[1];
        }
        if ( v11 > 1 )
        {
          v20 = v11 + 2;
          v21 = v11 - 1;
          v22 = *a3;
          v23 = v11 + 1;
          if ( v20 > (unsigned int)a3[2] )
          {
            v22 = sub_78018((int)a3, v22, v20, 1u);
            *a3 = v22;
          }
          a3[1] = (void *)v20;
          *((_BYTE *)v22 + v23) = 0;
          *(_WORD *)((char *)*a3 + v21) = *(_WORD *)": ";
        }
      }
      if ( v8 == 47 )
      {
        ptr = nullptr;
        v27 = 0;
        v28 = 0;
        v19 = sub_4CED8((int)&ptr, a2);
        sub_70C04(0, (const char *)v19);
        if ( ptr )
        {
          v27 = 0;
          sub_77F70(ptr);
        }
      }
      result = (int)sub_79980(v8);
      v13 = (const void *)result;
      if ( result )
      {
        v14 = strlen((const char *)result);
        v15 = a3[1];
        v16 = (int)v15 - 1;
        v17 = (size_t)v15 + v14 - 1;
        if ( !v15 )
        {
          v16 = 0;
          v17 = v14;
        }
        v18 = *a3;
        if ( v17 + 1 > (unsigned int)a3[2] )
        {
          v18 = sub_78018((int)a3, v18, v17 + 1, 1u);
          *a3 = v18;
        }
        a3[1] = (void *)(v17 + 1);
        *((_BYTE *)v18 + v17) = 0;
        return (int)memmove((char *)*a3 + v16, v13, v14);
      }
    }
  }
  return result;
}
