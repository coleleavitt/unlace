/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: deref_idcv
// Address: 0x00043B58

//----- (00043B58) --------------------------------------------------------
unsigned __int8 *__fastcall deref_idcv(unsigned __int8 *a1, char a2)
{
  unsigned __int8 *v2; // r4
  int v3; // r5
  int v4; // r0
  _DWORD *v5; // r1
  int *v6; // r0
  int *v7; // r3
  int v8; // r7
  unsigned __int8 *v10; // r6
  int v11; // r0
  int v13; // [sp+10h] [bp-14h]
  void *ptr; // [sp+14h] [bp-10h] BYREF
  int v15; // [sp+18h] [bp-Ch]
  unsigned int v16; // [sp+1Ch] [bp-8h]

  v2 = a1;
  if ( !a1 )
  {
    set_qerrno(1563);
    return nullptr;
  }
  if ( *a1 == 10 )
  {
    v15 = 0;
    ptr = nullptr;
    v16 = 0;
    v13 = sub_3F7BC();
    v3 = (int)v2;
    while ( 1 )
    {
      v4 = *(_DWORD *)(v3 + 12);
      if ( v4 < 0 )
      {
        v3 = sub_43AF4(v13, ~v4);
        if ( (a2 & 1) != 0 )
          break;
      }
      else
      {
        v5 = *(_DWORD **)(v3 + 8);
        if ( !v5 )
          goto LABEL_23;
        if ( *v5 != 289621065 )
          goto LABEL_23;
        if ( (unsigned int)v4 >= v5[4] )
          goto LABEL_23;
        v3 = v5[3] + 24 * v4;
        if ( !v3 )
          goto LABEL_23;
        if ( (a2 & 1) != 0 )
          break;
      }
      if ( *(_BYTE *)v3 != 10 )
        break;
      v6 = (int *)((char *)ptr + 4 * v15);
      v7 = (int *)ptr;
      if ( 4 * v15 )
      {
        v8 = 4 * v15;
        v7 = (int *)ptr;
        while ( v3 != *v7 )
        {
          v8 -= 4;
          ++v7;
          if ( !v8 )
            goto LABEL_20;
        }
      }
      if ( v7 != v6 )
      {
LABEL_23:
        set_qerrno(1563);
        v2 = nullptr;
        goto LABEL_24;
      }
LABEL_20:
      if ( v16 < v15 + 1 )
      {
        ptr = qvector_reserve((int)&ptr, ptr, v15 + 1, 4u);
        v6 = (int *)((char *)ptr + 4 * v15);
      }
      *v6 = v3;
      ++v15;
    }
    if ( (a2 & 2) != 0 )
    {
      v10 = v2;
      *v2 = 2;
      v11 = copy_idcv(v2, (unsigned __int8 *)v3);
      v2 = nullptr;
      if ( v11 )
        goto LABEL_24;
    }
    else
    {
      v10 = (unsigned __int8 *)v3;
    }
    v2 = v10;
LABEL_24:
    if ( ptr )
    {
      v15 = 0;
      qfree(ptr);
      v16 = 0;
      ptr = nullptr;
    }
  }
  return v2;
}
