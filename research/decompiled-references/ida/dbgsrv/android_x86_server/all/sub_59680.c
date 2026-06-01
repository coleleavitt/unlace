/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_59680
// Address: 0x00059680

//----- (00059680) --------------------------------------------------------
unsigned int __cdecl sub_59680(void *ptr, char *a2)
{
  unsigned int v3; // edi
  int v4; // eax
  int v5; // esi
  int v6; // esi
  int v7; // ecx
  _DWORD *v8; // eax
  int v9; // ecx
  int v11; // [esp+4h] [ebp-68h]
  void *v12[3]; // [esp+8h] [ebp-64h] BYREF
  _DWORD v13[6]; // [esp+14h] [ebp-58h] BYREF
  int v14; // [esp+2Ch] [ebp-40h] BYREF
  int v15; // [esp+30h] [ebp-3Ch]
  unsigned int v16; // [esp+34h] [ebp-38h]
  unsigned int v17; // [esp+58h] [ebp-14h]

  v17 = __readgsdword(0x14u);
  if ( (*((_DWORD *)ptr + 3))-- == 1 )
  {
    v3 = *((_DWORD *)ptr + 4);
    if ( v3 )
    {
      do
      {
        while ( 1 )
        {
          v4 = sub_537A0(v3);
          v3 = *(_DWORD *)(v4 + 12);
          if ( *(_DWORD *)(v4 + 40) == -1 )
            break;
          v5 = v4;
          *((_DWORD *)ptr + 3) += 32;
          sub_5FB80((int)v12, 0, 1);
          v11 = *(_DWORD *)(v5 + 40);
          v6 = v13[1];
          v7 = v15;
          if ( v16 >= v15 + 1 )
          {
            v8 = (_DWORD *)v14;
          }
          else
          {
            v8 = qvector_reserve((int)&v14, (void *)v14, v15 + 1, 4u);
            v14 = (int)v8;
            v7 = v15;
          }
          v8[v7] = v6;
          ++v15;
          sub_4E740((int)v13, a2);
          sub_5E940(v12, nullptr, nullptr, v11);
          sub_5FE80((int)v12);
          v9 = *((_DWORD *)ptr + 3) - 32;
          *((_DWORD *)ptr + 3) = v9;
          if ( !v3 || v9 )
            goto LABEL_13;
        }
      }
      while ( v3 );
      v9 = *((_DWORD *)ptr + 3);
    }
    else
    {
      v9 = 0;
    }
LABEL_13:
    if ( !v9 )
    {
      sub_55C70((int)ptr, *((void ***)ptr + 1));
      operator delete(ptr);
    }
  }
  return __readgsdword(0x14u);
}
