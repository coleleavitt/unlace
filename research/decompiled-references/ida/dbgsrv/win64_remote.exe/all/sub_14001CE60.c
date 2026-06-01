/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001CE60
// Address: 0x000000014001CE60

//----- (000000014001CE60) ----------------------------------------------------
bool __fastcall sub_14001CE60(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  const void **v13; // rbx
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // edx
  _BYTE *v18; // r9
  int v19; // edx
  int v20; // edx
  int v21; // ecx
  const void *v22; // rax
  unsigned __int64 v23; // rax

  if ( !a5 )
    return 0;
  v7 = *(_QWORD *)(a1 + 496);
  v8 = a4;
  *(_DWORD *)(v7 + 108) = a2;
  v9 = 0;
  for ( *(_DWORD *)(v7 + 104) = 0; v9 < a4; ++v9 )
  {
    v10 = *(_QWORD *)(a1 + 496);
    v11 = (int)v9 + a3;
    if ( v11 < *(_QWORD *)(v10 + 24) )
      *(_DWORD *)(v10 + 104) |= *(unsigned __int8 *)(**(_QWORD **)(v10 + 8) + 32 * v11 + 12);
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, unsigned __int64))(**(_QWORD **)(a1 + 496) + 16LL))(
          *(_QWORD *)(a1 + 496),
          v9) )
    return 0;
  v12 = 0;
  if ( v8 )
  {
    v13 = (const void **)(a5 + 8);
    do
    {
      v14 = *(_QWORD *)(a1 + 496);
      v15 = (int)v12 + a3;
      if ( v15 >= *(_QWORD *)(v14 + 24) )
      {
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(3258);
      }
      v16 = *(_QWORD *)(v14 + 16) + 40 * v15;
      v17 = *(_DWORD *)v16;
      if ( *(_DWORD *)v16 == 3 )
      {
        (*(void (__fastcall **)(__int64, const void **, _QWORD))(v16 + 24))(v14, v13 - 1, *(_QWORD *)(v16 + 32));
      }
      else
      {
        v18 = (_BYTE *)(v14 + *(_QWORD *)(v16 + 16));
        if ( v17 )
        {
          v19 = v17 - 1;
          if ( v19 && (v20 = v19 - 1) != 0 )
          {
            if ( v20 == 1 )
            {
              if ( byte_1400CB61C )
                __debugbreak();
              sub_14005A480(3257);
            }
          }
          else
          {
            v21 = *((_DWORD *)v13 - 2);
            if ( v21 < -1 )
            {
              LODWORD(v22) = 0;
              if ( v21 == -2 )
                LODWORD(v22) = 8;
            }
            else
            {
              v22 = v13[1];
            }
            if ( (int)v22 != *(_QWORD *)(v16 + 24) )
              return 0;
            if ( v21 < -1 )
              memcpy(v18, v13, (int)v22);
            else
              memcpy(v18, *v13, (int)v22);
          }
        }
        else
        {
          v23 = (unsigned __int64)*v13;
          switch ( *(_QWORD *)(v16 + 32) )
          {
            case 1LL:
              v23 = (unsigned __int8)v23;
              break;
            case 2LL:
              v23 = (unsigned __int16)v23;
              break;
            case 4LL:
              v23 = (unsigned int)v23;
              break;
          }
          switch ( *(_QWORD *)(v16 + 24) )
          {
            case 1LL:
              *v18 = v23;
              break;
            case 2LL:
              *(_WORD *)v18 = v23;
              break;
            case 4LL:
              *(_DWORD *)v18 = v23;
              break;
            case 8LL:
              *(_QWORD *)v18 = v23;
              break;
          }
        }
      }
      ++v12;
      v13 += 4;
    }
    while ( v12 < v8 );
  }
  return (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 496) + 24LL))(*(_QWORD *)(a1 + 496)) != 0;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
