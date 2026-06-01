/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2D230
// Address: 0x0002D230

//----- (0002D230) --------------------------------------------------------
_DWORD *__userpurge sub_2D230@<eax>(_DWORD *a1, _DWORD **a2, _DWORD *a3, unsigned int *a4, int a5)
{
  int *v5; // eax
  _DWORD *v6; // esi
  size_t v7; // edi
  void *v8; // eax
  int v9; // eax
  _DWORD *v10; // eax
  int v11; // eax
  int *v13; // [esp+4h] [ebp-28h]
  int v14; // [esp+10h] [ebp-1Ch] BYREF
  _DWORD v15[6]; // [esp+14h] [ebp-18h] BYREF

  v15[1] = __readgsdword(0x14u);
  v5 = (int *)sub_2D360(a2, a3, v15, &v14, a4);
  v6 = (_DWORD *)*v5;
  if ( !*v5 )
  {
    v13 = v5;
    v6 = operator new(0x20u);
    v6[4] = *(_DWORD *)a5;
    v6[5] = 0;
    v6[6] = 0;
    v6[7] = 0;
    v7 = *(_DWORD *)(a5 + 8);
    if ( v7 )
    {
      v8 = qalloc_or_throw(v7);
      v6[5] = v8;
      v6[7] = v7;
      memcpy(v8, *(const void **)(a5 + 4), v7);
      v6[6] = v7;
    }
    v9 = v15[0];
    *v6 = 0;
    v6[1] = 0;
    v6[2] = v9;
    *v13 = (int)v6;
    v10 = (_DWORD *)**a2;
    if ( v10 )
    {
      *a2 = v10;
      v11 = *v13;
    }
    else
    {
      v11 = (int)v6;
    }
    sub_2D500((int)a2[1], v11);
    a2[2] = (_DWORD *)((char *)a2[2] + 1);
  }
  *a1 = v6;
  return a1;
}
