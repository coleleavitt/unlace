__int64 __fastcall sub_197C00(__int64 a1, _QWORD *a2, int *a3)
{
  int v4; // eax
  int *v5; // rdi
  __int64 result; // rax
  __int64 v7; // r12
  int v8; // ebx
  char v9; // dl
  char *v10; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v11[5]; // [rsp+10h] [rbp-28h] BYREF

  v4 = *a3;
  v11[1] = __readfsqword(0x28u);
  v5 = a3;
  if ( v4 == 9 )
  {
    if ( *((_BYTE *)a3 + 32) != 4 )
      return 0;
    v5 = *((int **)a3 + 5);
    v4 = *v5;
  }
  if ( v4 != 20 )
    return 0;
  v7 = sub_116220((__int64)v5, &v10, 5);
  if ( !v7 )
    return 0;
  v8 = *(_DWORD *)(a1 + 40);
  result = sub_1196C0(v10, v11, 1u);
  if ( !(_BYTE)result || v8 - 1 != v11[0] )
    return 0;
  v9 = *(_BYTE *)(v7 + 32);
  if ( v9 == 4 )
  {
    v7 = *(_QWORD *)(v7 + 40);
    if ( *(_DWORD *)v7 == 10 )
    {
      v9 = *(_BYTE *)(v7 + 32);
      goto LABEL_8;
    }
    return 0;
  }
LABEL_8:
  if ( v9 != 10 || **(_BYTE **)(v7 + 40) != 5 )
    return 0;
  *a2 = v7 + 32;
  return result;
}
