/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_418B8
// Address: 0x000418B8

//----- (000418B8) --------------------------------------------------------
void __fastcall sub_418B8(int a1, int a2, _BYTE *a3, int a4)
{
  unsigned int v6; // r6
  const void *v7; // r10
  size_t v8; // r6
  unsigned __int8 *v11; // r0
  int v12; // r10
  _BYTE *v13; // r6
  unsigned __int8 *v14; // r0
  int v15; // r2
  int (*v16)(); // r6
  void *v17; // r0
  void *v18; // r0
  size_t n; // [sp+0h] [bp-1Ch]
  size_t na; // [sp+0h] [bp-1Ch]
  void *ptr; // [sp+8h] [bp-14h] BYREF
  size_t v22; // [sp+Ch] [bp-10h]
  int v23; // [sp+10h] [bp-Ch]

  v6 = *(_DWORD *)(a1 + 92);
  if ( v6 < (unsigned int)a3 )
  {
    v7 = *(const void **)(a1 + 88);
    if ( v6 < (unsigned int)v7 )
      goto LABEL_3;
    v8 = v6 - (_DWORD)v7;
    ptr = nullptr;
    v22 = 0;
    v23 = 0;
    if ( !v8
      || (v8 != -1 ? (v17 = sub_78018((int)&ptr, nullptr, v8 + 1, 1u), ptr = v17) : (v17 = nullptr),
          v22 = v8 + 1,
          memmove(v17, v7, v8),
          *((_BYTE *)ptr + v8) = 0,
          v11 = (unsigned __int8 *)ptr,
          !v22) )
    {
      v11 = (unsigned __int8 *)&dword_8DB98;
    }
    v12 = sub_7052C(v11);
    if ( ptr )
    {
      v22 = 0;
      sub_77F70(ptr);
    }
    v13 = *(_BYTE **)(a1 + 92);
    if ( v13 > a3 )
    {
LABEL_3:
      if ( under_debugger )
        __und(0xFFu);
      sub_78C64(1833);
    }
    ptr = nullptr;
    v22 = 0;
    v23 = 0;
    n = a3 - v13;
    if ( a3 == v13
      || (n != -1 ? (v18 = sub_78018((int)&ptr, nullptr, n + 1, 1u), ptr = v18) : (v18 = nullptr),
          v22 = n + 1,
          memmove(v18, v13, n),
          *((_BYTE *)ptr + n) = 0,
          v14 = (unsigned __int8 *)ptr,
          !v22) )
    {
      v14 = (unsigned __int8 *)&dword_8DB98;
    }
    v15 = sub_7052C(v14);
    if ( ptr )
    {
      na = v15;
      v22 = 0;
      sub_77F70(ptr);
      v15 = na;
    }
    v16 = *(int (**)())(*(_DWORD *)a2 + 8);
    if ( v16 != nullsub_3 )
      ((void (__fastcall *)(int, int, int, int))v16)(a2, v12, v15, a4);
    *(_DWORD *)(a1 + 92) = a3;
  }
}
// 4188C: using guessed type int nullsub_3();
// 8DB98: using guessed type int dword_8DB98;
// D6C20: using guessed type char under_debugger;
