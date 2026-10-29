/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_55268
// Address: 0x00055268

//----- (00055268) --------------------------------------------------------
int __fastcall sub_55268(unsigned __int8 *a1, int a2)
{
  int v3; // r5
  unsigned __int8 *v4; // r5
  int v5; // r1
  void *v6; // r0
  int v7; // r0
  int v8; // r0
  unsigned __int8 *v9; // r3
  int v10; // r2
  _BYTE *v11; // r0
  void *ptr; // [sp+2Ch] [bp+4h] BYREF
  int v15; // [sp+30h] [bp+8h]
  unsigned int v16; // [sp+34h] [bp+Ch]
  _BYTE v17[4]; // [sp+38h] [bp+10h] BYREF
  unsigned __int8 v18[8220]; // [sp+3Ch] [bp+14h] BYREF
  int v19; // [sp+2058h] [bp+2030h]
  int v20; // [sp+2060h] [bp+2038h]
  unsigned __int8 v21[4096]; // [sp+406Ch] [bp+4044h] BYREF
  int v22; // [sp+506Ch] [bp+5044h] BYREF

  v3 = 1;
  if ( !qfileexist((const char *)a1) )
  {
    v21[0] = 0;
    v15 = 0;
    ptr = nullptr;
    v16 = 0;
    while ( 1 )
    {
      v4 = qbasename(a1);
      v5 = v15;
      if ( v16 >= v15 + 1 )
      {
        v6 = ptr;
      }
      else
      {
        v6 = qvector_reserve((int)&ptr, ptr, v15 + 1, 4u);
        ptr = v6;
        v5 = v15;
      }
      *((_DWORD *)v6 + v5) = v4;
      v7 = ++v15;
      if ( v4 == a1 )
        break;
      *(v4 - 1) = 0;
      if ( qisdir((const char *)a1) )
      {
        qstrncpy((unsigned int)v21, a1, 4096);
        v7 = v15;
        break;
      }
    }
    if ( v7 )
    {
      while ( 1 )
      {
        v8 = v7 - 1;
        v9 = *((unsigned __int8 **)ptr + v8);
        v15 = v8;
        if ( v21[0] )
          qmakepath((char *)v21, 4096, (char *)v21);
        else
          qstrncpy((unsigned int)v21, v9, 4096);
        v19 = 0;
        v20 = 0;
        v10 = 0x4000;
        if ( !v15 )
          v10 = 0;
        if ( qfindfirst((int)v21, (int)v17, v10) )
          break;
        v11 = qbasename(v21);
        qstrncpy((unsigned int)v11, v18, (char *)&v22 - v11);
        qfindclose((int)v17);
        v7 = v15;
        if ( !v15 )
          goto LABEL_17;
      }
      qfindclose((int)v17);
      v3 = 0;
    }
    else
    {
LABEL_17:
      qstrncpy((unsigned int)a1, v21, a2);
      v3 = 1;
    }
    if ( ptr )
    {
      v15 = 0;
      qfree(ptr);
      v16 = 0;
      ptr = nullptr;
    }
  }
  return v3;
}
