/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001E810
// Address: 0x000000014001E810

//----- (000000014001E810) ----------------------------------------------------
char __fastcall sub_14001E810(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned int *a4)
{
  double v4; // xmm2_8
  _QWORD *v5; // rax
  unsigned int v10; // esi
  _QWORD *v11; // rbx
  unsigned __int64 v12; // r8
  int v13; // r9d
  unsigned int v14; // eax
  unsigned int v15; // r8d
  __int64 **v16; // rcx
  __int64 i; // rax
  __int64 *j; // rcx
  unsigned int v20; // [rsp+60h] [rbp+8h] BYREF

  v5 = *(_QWORD **)(a1 + 472);
  v10 = 0;
  v11 = (_QWORD *)*v5;
  if ( (_QWORD *)*v5 == v5 )
    return 0;
  do
  {
    v12 = v11[6];
    if ( v12 + *((int *)v11 + 16) > a2 )
    {
      if ( v12 >= a3 )
        break;
      if ( *((_DWORD *)v11 + 17) )
      {
        v13 = *((_DWORD *)v11 + 18);
        if ( *a4 == v13 )
        {
          v10 = *((_DWORD *)v11 + 17);
          goto LABEL_11;
        }
        sub_140043130(
          a1,
          (struct __crt_locale_pointers *)"mask_page_bpts: app changed our page protection for %a (expected: 0x%x, actual: 0x%x)\n",
          v4,
          v13,
          *a4);
        v14 = *a4;
        v20 = v14;
        if ( v14 == 8 )
        {
          if ( *((_DWORD *)v11 + 18) == 4 )
            goto LABEL_18;
        }
        else if ( v14 == 128 && *((_DWORD *)v11 + 18) == 64 )
        {
LABEL_18:
          sub_140043130(a1, (struct __crt_locale_pointers *)"   ignoring changes to WRITECOPY protection\n");
          goto LABEL_11;
        }
        if ( sub_14001E980(&v20, *((_DWORD *)v11 + 19), *(_DWORD *)(a1 + 800), *(_QWORD *)(a1 + 792)) )
        {
          v15 = v20;
          *((_DWORD *)v11 + 18) = v20;
          *((_DWORD *)v11 + 17) = 0;
          sub_140043130(a1, (struct __crt_locale_pointers *)"   will re-set protection to 0x%x\n", v15);
        }
      }
    }
LABEL_11:
    v16 = (__int64 **)v11[2];
    if ( *((_BYTE *)v16 + 25) )
    {
      for ( i = v11[1]; !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 8) )
      {
        if ( v11 != *(_QWORD **)(i + 16) )
          break;
        v11 = (_QWORD *)i;
      }
      v11 = (_QWORD *)i;
    }
    else
    {
      v11 = (_QWORD *)v11[2];
      for ( j = *v16; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v11 = j;
    }
  }
  while ( v11 != *(_QWORD **)(a1 + 472) );
  if ( v10 )
  {
    *a4 = v10;
    return 1;
  }
  return 0;
}
// 14001E892: variable 'v4' is possibly undefined
