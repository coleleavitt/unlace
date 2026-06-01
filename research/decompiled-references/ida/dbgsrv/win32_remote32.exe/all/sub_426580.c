/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_426580
// Address: 0x00426580

//----- (00426580) --------------------------------------------------------
_DWORD *__thiscall sub_426580(int this, const char *a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // esi
  _DWORD *v6; // ebx
  _DWORD *v7; // eax
  int v8; // edi
  _DWORD *v9; // eax
  unsigned int *v10; // ecx
  unsigned int v11; // edi
  unsigned int v12; // eax
  LPVOID v13; // eax
  int v14; // eax
  unsigned int v15; // eax

  if ( !a2 )
    return nullptr;
  v5 = dword_4B6B40;
  sub_4562D0(dword_4B6B40);
  v6 = (_DWORD *)sub_4278F0((unsigned int *)this, a2);
  if ( !v6 )
  {
    v7 = sub_4627C2(0x28u);
    v6 = v7;
    if ( v7 )
    {
      v8 = *(_DWORD *)(this + 44);
      *v7 = 0;
      v7[1] = 0;
      v9 = sub_4627C2(0x20u);
      *v9 = v9;
      v9[1] = v9;
      v9[2] = v9;
      *((_WORD *)v9 + 6) = 257;
      *v6 = v9;
      v6[2] = 0;
      v6[3] = v8;
      v6[4] = 0;
      v6[5] = 0;
      v6[6] = 0;
      v6[7] = -1;
      v6[8] = -1;
      v6[9] = -1;
    }
    else
    {
      v6 = nullptr;
    }
    v10 = v6 + 4;
    v11 = strlen(a2);
    if ( v11 )
    {
      v12 = v11 + 1;
      if ( v11 + 1 > v6[6] )
      {
        v13 = sub_453B00((int)(v6 + 4), (void *)*v10, v11 + 1, 1u);
        v10 = v6 + 4;
        v6[4] = v13;
        v12 = v11 + 1;
      }
      v10[1] = v12;
      sub_464310(*v10, (unsigned int)a2, v11);
      *(_BYTE *)(v11 + v6[4]) = 0;
    }
    else
    {
      v6[5] = 0;
    }
    if ( a3 )
      v14 = *(_DWORD *)(a3 + 12);
    else
      v14 = 0;
    v6[2] = v14;
    v15 = *(_DWORD *)(this + 44) + 1;
    if ( v15 > *(_DWORD *)(this + 48) )
      *(_DWORD *)(this + 40) = sub_453B00(this + 40, *(void **)(this + 40), v15, 4u);
    *(_DWORD *)(*(_DWORD *)(this + 40) + 4 * (*(_DWORD *)(this + 44))++) = v6;
  }
  sub_4562F0(v5);
  return v6;
}
