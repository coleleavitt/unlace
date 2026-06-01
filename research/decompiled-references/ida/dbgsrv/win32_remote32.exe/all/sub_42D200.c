/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42D200
// Address: 0x0042D200

//----- (0042D200) --------------------------------------------------------
int __thiscall sub_42D200(_DWORD *this, const char *a2, int *a3)
{
  int v3; // ebx
  _DWORD *v4; // esi
  int v5; // ecx
  unsigned int *v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // esi
  const char *v9; // eax
  int v10; // eax
  unsigned int *v12; // [esp+Ch] [ebp-8h]

  v3 = 0;
  v4 = this;
  v5 = sub_42D310(this + 15, a2);
  if ( v5 == -1 )
  {
    v5 = sub_42D310(v4 + 18, a2);
    if ( v5 == -1 )
    {
      v6 = (unsigned int *)v4[14];
      v7 = 0;
      v12 = v6;
      if ( v6[14] )
      {
        v8 = v6[13];
        while ( 1 )
        {
          v9 = MultiByteStr;
          if ( *(_DWORD *)(v8 + 4) )
            v9 = *(const char **)v8;
          v10 = strcmp(v9, a2);
          if ( v10 )
            v10 = v10 < 0 ? -1 : 1;
          if ( !v10 )
            break;
          v6 = v12;
          ++v7;
          v8 += 40;
          if ( v7 >= v12[14] )
          {
            v4 = this;
            goto LABEL_14;
          }
        }
        v5 = v7;
        v3 = 3;
      }
      else
      {
LABEL_14:
        if ( sub_4278F0(v6, a2) )
        {
          v3 = 5;
        }
        else if ( sub_4274C0((_DWORD *)v4[14], a2) == 0x7FFFFFFF )
        {
          if ( off_4B4080 && off_4B4080((int)a2) )
            v3 = 4;
        }
        else
        {
          v3 = 6;
        }
        v5 = -1;
      }
    }
    else
    {
      v3 = 2;
    }
  }
  else
  {
    v3 = 1;
  }
  if ( a3 )
    *a3 = v3;
  return v5;
}
// 4B4080: using guessed type bool (__stdcall *off_4B4080)(int a1);
