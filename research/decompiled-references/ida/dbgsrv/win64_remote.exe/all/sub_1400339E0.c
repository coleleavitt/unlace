/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400339E0
// Address: 0x00000001400339E0

//----- (00000001400339E0) ----------------------------------------------------
__int64 __fastcall sub_1400339E0(__int64 a1, __int64 a2, char a3, int a4)
{
  __int64 v8; // rdx
  unsigned int v9; // ebp
  __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rdx
  size_t v14; // rbx
  char v15; // dl
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rax
  size_t v19; // r8
  const char *v20; // rdx
  __int64 v21; // rdx
  size_t v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rax

  switch ( *(_DWORD *)a2 )
  {
    case 1:
      v8 = *(_QWORD *)(a2 + 16);
      if ( *(_QWORD *)(v8 + 8) )
        return (unsigned int)sub_140033800((_QWORD *)a1, *(char **)v8, a3, a4);
      else
        return (unsigned int)sub_140033800((_QWORD *)a1, (char *)Str1, a3, a4);
    case 2:
      sub_1400347C0(a1, 170);
      v21 = *(_QWORD *)(a2 + 8);
      v22 = *(_QWORD *)(v21 + 8);
      sub_14002CB40(*(void ***)(a1 + 192), *(const void **)v21, v22);
      *(_DWORD *)(a1 + 200) += v22;
      v23 = *(_QWORD *)(a2 + 16);
      if ( *(_DWORD *)v23 == 1 )
      {
        v24 = *(_QWORD *)(v23 + 16);
        if ( *(_QWORD *)(v24 + 8) )
          return (unsigned int)sub_140033590(a1, *(char **)v24, *(_DWORD *)(a2 + 24));
        else
          return (unsigned int)sub_140033590(a1, (char *)Str1, *(_DWORD *)(a2 + 24));
      }
      else
      {
        if ( *(_DWORD *)v23 == 5 )
        {
          v25 = sub_1400339E0(a1, *(_QWORD *)(v23 + 16), 0, 0);
          v26 = *(_QWORD *)(v23 + 8);
          v9 = v25;
          v27 = *(_QWORD *)(v26 + 8);
          if ( v27 )
            sub_140034980(a1, *(const char **)v26, v27 - 1);
          else
            sub_140034980(a1, Str1, 0);
          v15 = -9;
        }
        else
        {
          v9 = sub_1400339E0(a1, *(_QWORD *)(a2 + 16), 0, 0);
          v15 = -92;
        }
LABEL_30:
        sub_1400347C0(a1, v15);
      }
      return v9;
    case 3:
    case 4:
      if ( a3 && (v10 = *(_QWORD *)(a2 + 16), *(_DWORD *)v10 == 1) )
      {
        v11 = *(_QWORD *)(v10 + 16);
        if ( *(_QWORD *)(v11 + 8) )
          v12 = sub_140033DD0((_QWORD *)a1, *(char **)v11);
        else
          v12 = sub_140033DD0((_QWORD *)a1, (char *)Str1);
      }
      else
      {
        v12 = sub_1400339E0(a1, *(_QWORD *)(a2 + 16), 0, 0);
      }
      v13 = *(_QWORD *)(a2 + 8);
      v9 = v12;
      v14 = *(_QWORD *)(v13 + 8);
      sub_14002CB40(*(void ***)(a1 + 192), *(const void **)v13, v14);
      *(_DWORD *)(a1 + 200) += v14;
      if ( *(_DWORD *)a2 == 3 )
        v15 = (a3 ^ 1) - 5;
      else
        v15 = a3 - 2;
      goto LABEL_30;
    case 5:
      v16 = sub_1400339E0(a1, *(_QWORD *)(a2 + 16), 0, 0);
      v17 = *(_QWORD *)(a2 + 8);
      v9 = v16;
      v18 = *(_QWORD *)(v17 + 8);
      v19 = v18 - 1;
      if ( v18 )
      {
        v20 = *(const char **)v17;
      }
      else
      {
        v19 = 0;
        v20 = Str1;
      }
      sub_140034980(a1, v20, v19);
      if ( a4 )
        v15 = (a4 <= 0) - 11;
      else
        v15 = a3 - 14;
      goto LABEL_30;
    default:
      if ( byte_1400CB61C )
        __debugbreak();
      sub_14005A480(273);
  }
}
// 1400CB61C: using guessed type char byte_1400CB61C;
