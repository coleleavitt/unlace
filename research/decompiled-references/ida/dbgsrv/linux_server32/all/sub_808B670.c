/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808B670
// Address: 0x0808B670

//----- (0808B670) --------------------------------------------------------
int __cdecl sub_808B670(int a1, int *a2)
{
  _DWORD *v2; // edi
  int v3; // edx
  int v4; // eax
  __int64 v5; // xmm0_8
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int result; // eax
  int v10; // edx
  int v11; // eax
  unsigned __int8 v12[4]; // [esp+0h] [ebp-34h] BYREF
  __int128 v13; // [esp+4h] [ebp-30h]
  unsigned int v14; // [esp+14h] [ebp-20h]

  v14 = __readgsdword(0x14u);
  v2 = (_DWORD *)(*(_DWORD *)(a1 + 12) + 20 * *(_DWORD *)(a1 + 16) - 20);
  if ( !sub_8089CE0((int)v2) )
  {
    v3 = v2[1];
    v4 = *a2;
    v12[0] = 2;
    v5 = *(_QWORD *)(a2 + 1);
    *a2 = v3;
    a2[1] = v2[2];
    a2[2] = v2[3];
    *((_QWORD *)v2 + 1) = v5;
    v2[1] = v4;
    v6 = *(_DWORD *)(a1 + 16);
    v13 = 0;
    sub_8089810(v12, (unsigned __int8 *)(*(_DWORD *)(a1 + 12) + 20 * v6 - 20));
    v7 = *(_DWORD *)(a1 + 16);
    if ( v7 )
    {
      v10 = *(_DWORD *)(a1 + 12);
      v11 = v7 - 1;
      *(_DWORD *)(a1 + 16) = v11;
      sub_8089430(v10 + 20 * v11);
    }
    sub_8089430((int)v12);
    v8 = *(_DWORD *)(a1 + 12) + 20 * *(_DWORD *)(a1 + 16) - 20;
    if ( *(_BYTE *)v8 == 5 )
    {
      result = *(_DWORD *)(v8 + 4);
      goto LABEL_6;
    }
    sub_80C7880(1532);
  }
  result = 0;
LABEL_6:
  if ( v14 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
