/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_60CB8
// Address: 0x00060CB8

//----- (00060CB8) --------------------------------------------------------
unsigned int __fastcall sub_60CB8(int a1, int *a2, unsigned int a3, void **a4)
{
  int (*v6)(void); // r8
  int v8; // r1
  char *v9; // r7
  int v10; // r2
  unsigned int v11; // r0
  char v12; // r3
  const char *v13; // r8
  unsigned __int8 *v14; // r3
  size_t v17; // r0
  size_t v18; // r9
  void *v19; // r10
  void *v20; // r0
  unsigned __int8 *v21; // [sp+4h] [bp-Ch] BYREF
  unsigned __int8 *v22; // [sp+8h] [bp-8h]

  v6 = *(int (**)(void))(*(_DWORD *)a1 + 8);
  v8 = *(unsigned __int8 *)(*a2 + 4);
  if ( (char *)v6 == (char *)sub_579AC )
    v9 = (char *)sub_60B0C(a1, v8, a2, 0);
  else
    v9 = (char *)v6();
  if ( v9 )
  {
    v10 = *(_DWORD *)v9;
    v21 = (unsigned __int8 *)(v9 + 5);
    v22 = (unsigned __int8 *)&v9[v10 + 5];
    v11 = sub_7617C(&v21, (unsigned int)v22);
    v12 = (char)a4;
    a3 = v11;
    if ( a4 )
      v12 = 1;
    if ( (*(_DWORD *)&v12 & (v11 >> 31)) == 0 )
      goto LABEL_13;
    v13 = (const char *)v21;
    if ( v22 > v21 )
    {
      v14 = v21 + 1;
      if ( *v21 )
      {
        while ( v22 != v14 )
        {
          if ( !*v14++ )
            goto LABEL_16;
        }
      }
      else
      {
LABEL_16:
        v21 = v14;
        if ( v13 )
        {
          v17 = strlen(v13);
          v18 = v17;
          if ( v17 )
          {
            v19 = (void *)(v17 + 1);
            v20 = *a4;
            if ( v19 > a4[2] )
            {
              v20 = sub_77EB0((int)a4, *a4, (unsigned int)v19, 1u);
              *a4 = v20;
            }
            a4[1] = v19;
            memmove(v20, v13, v18);
            *((_BYTE *)*a4 + v18) = 0;
            goto LABEL_13;
          }
        }
      }
    }
    a4[1] = nullptr;
LABEL_13:
    sub_77E08(v9);
  }
  return a3;
}
