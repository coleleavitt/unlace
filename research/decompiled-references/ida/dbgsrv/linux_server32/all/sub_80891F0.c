/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80891F0
// Address: 0x080891F0

//----- (080891F0) --------------------------------------------------------
unsigned int __cdecl sub_80891F0(int a1, unsigned __int8 *a2)
{
  unsigned int v2; // esi
  int v3; // edx
  char *v4; // eax
  char *v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // ebx
  int v9; // ecx
  int v10; // edx
  void *v11; // eax
  unsigned int result; // eax
  int v13; // [esp+0h] [ebp-A0h]
  int v14; // [esp+8h] [ebp-98h]
  int v15; // [esp+14h] [ebp-8Ch]
  void *v16[3]; // [esp+20h] [ebp-80h] BYREF
  void *v17; // [esp+2Ch] [ebp-74h] BYREF
  int v18; // [esp+30h] [ebp-70h]
  unsigned int v19; // [esp+34h] [ebp-6Ch]
  void *ptr; // [esp+44h] [ebp-5Ch] BYREF
  int v21; // [esp+48h] [ebp-58h]
  unsigned int v22; // [esp+4Ch] [ebp-54h]
  unsigned __int8 v23[4]; // [esp+70h] [ebp-30h] BYREF
  __int128 v24; // [esp+74h] [ebp-2Ch]
  unsigned int v25; // [esp+84h] [ebp-1Ch]

  v25 = __readgsdword(0x14u);
  v15 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 24) = v15 - 1;
  if ( v15 == 1 )
  {
    v2 = *(_DWORD *)(a1 + 28);
    if ( v2 )
    {
      while ( 1 )
      {
        v7 = sub_8080DD0(v2);
        v2 = *(_DWORD *)(v7 + 24);
        v8 = v7;
        if ( *(_DWORD *)(v7 + 52) != -1 )
        {
          *(_DWORD *)(a1 + 24) += 32;
          sub_808ACA0((int)v16, 0, 1);
          v9 = v21;
          v10 = v18;
          v14 = *(_DWORD *)(v8 + 52);
          v11 = ptr;
          if ( v22 < v21 + 1 )
          {
            v13 = v18;
            v11 = sub_80CF920((int)&ptr, ptr, v21 + 1, 4u);
            v9 = v21;
            v10 = v13;
            ptr = v11;
          }
          *((_DWORD *)v11 + v9) = v10;
          ++v21;
          v23[0] = 2;
          v24 = 0;
          sub_8089810(v23, a2);
          v3 = v18;
          v4 = (char *)v17;
          if ( v19 < v18 + 1 )
          {
            v4 = (char *)sub_80CF920((int)&v17, v17, v18 + 1, 0x14u);
            v3 = v18;
            v17 = v4;
          }
          v5 = &v4[20 * v3];
          *v5 = 2;
          *(_OWORD *)(v5 + 4) = 0;
          sub_8089810((unsigned __int8 *)v5, v23);
          ++v18;
          sub_8089430((int)v23);
          sub_80890B0(v16, nullptr, nullptr, v14);
          sub_808AE30((int)v16);
          v6 = *(_DWORD *)(a1 + 24) - 32;
          *(_DWORD *)(a1 + 24) = v6;
          if ( v6 )
            break;
        }
        if ( !v2 )
        {
          v2 = *(_DWORD *)(a1 + 24);
          goto LABEL_12;
        }
      }
    }
    else
    {
LABEL_12:
      if ( a1 && !v2 )
      {
        sub_808E370(*(_DWORD **)(a1 + 8));
        operator delete((void *)a1, 0x20u);
      }
    }
  }
  result = v25 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
