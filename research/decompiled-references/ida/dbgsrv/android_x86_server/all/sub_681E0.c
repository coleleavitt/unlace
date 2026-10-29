/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_681E0
// Address: 0x000681E0

//----- (000681E0) --------------------------------------------------------
_DWORD *__userpurge sub_681E0@<eax>(_DWORD *a1, int a2, _DWORD *a3, int a4, int a5)
{
  int *v5; // eax
  _DWORD *v6; // esi
  int *v7; // edi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v12; // [esp+10h] [ebp-1Ch] BYREF
  _DWORD v13[6]; // [esp+14h] [ebp-18h] BYREF

  v13[1] = __readgsdword(0x14u);
  v5 = sub_682D0(a2, a3, v13, &v12, a4);
  v6 = (_DWORD *)*v5;
  if ( !*v5 )
  {
    v7 = v5;
    v6 = operator new(0x30u);
    sub_685D0((int)(v6 + 4), a5);
    v8 = v13[0];
    *v6 = 0;
    v6[1] = 0;
    v6[2] = v8;
    *v7 = (int)v6;
    v9 = **(_DWORD **)a2;
    if ( v9 )
    {
      *(_DWORD *)a2 = v9;
      v10 = *v7;
    }
    else
    {
      v10 = (int)v6;
    }
    sub_2D500(*(_DWORD *)(a2 + 4), v10);
    ++*(_DWORD *)(a2 + 8);
  }
  *a1 = v6;
  return a1;
}
