__int64 __fastcall sub_12290(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  int *v5; // rax
  int v6; // edi
  __int64 result; // rax
  int v8; // edx
  char v9; // bl
  __int64 v10; // [rsp+8h] [rbp-40h]
  char v11; // [rsp+17h] [rbp-31h] BYREF
  int v12; // [rsp+18h] [rbp-30h] BYREF
  int v13; // [rsp+1Ch] [rbp-2Ch] BYREF
  __int64 v14[5]; // [rsp+20h] [rbp-28h] BYREF

  v14[1] = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 72);
  v3 = v2 + 4;
  if ( (unsigned __int64)(v2 + 4) > *(_QWORD *)(a1 + 64) )
    return 0;
  v5 = (int *)(*(_QWORD *)(a1 + 56) + v2);
  v6 = *v5;
  *(_QWORD *)(a1 + 72) = v3;
  switch ( a2 )
  {
    case 1:
      v8 = 0;
      v9 = 0;
      break;
    case 2:
      v8 = 1;
      v9 = 0;
      break;
    case 9:
      v8 = 0;
      v9 = 1;
      break;
    case 10:
      v8 = 0;
      v9 = 2;
      break;
    case 11:
      v8 = 0;
      v9 = 3;
      break;
    default:
      return 0;
  }
  if ( !*(_QWORD *)(a1 + 560) )
    return 0;
  v12 = v8;
  v13 = v6;
  v11 = v9;
  v14[0] = (__int64)v5;
  result = (*(__int64 (__fastcall **)(__int64, char *, int *, int *, __int64 *))(a1 + 568))(
             a1 + 544,
             &v11,
             &v12,
             &v13,
             v14);
  if ( !result )
    return 0;
  if ( !v9 && (*(_WORD *)(result + 16) & 0xFFF7) != 0x121 )
  {
    v14[0] = result;
    v10 = result;
    sub_11EC0(a1 + 104, v14, (_QWORD *)a1);
    return v10;
  }
  return result;
}

