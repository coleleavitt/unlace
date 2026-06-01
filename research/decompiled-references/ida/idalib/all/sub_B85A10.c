__int64 __fastcall sub_B85A10(__int64 a1)
{
  __int64 v1; // rax
  int *v2; // rdx
  int v3; // eax
  __int64 result; // rax
  __int64 *v5; // rax
  __int64 v6; // rdx
  _QWORD v7[3]; // [rsp+0h] [rbp-18h] BYREF

  v1 = *(_QWORD *)a1 & 7LL;
  if ( (_DWORD)v1 == 7 )
  {
    v2 = (int *)(*(_QWORD *)a1 & 0xFFFFFFFFFFFFFFF8LL);
    v3 = 3;
    if ( (unsigned int)*v2 <= 3 )
      v3 = *v2;
    v1 = (unsigned int)(v3 + 8);
  }
  switch ( v1 )
  {
    case 0LL:
    case 1LL:
    case 2LL:
    case 7LL:
      goto LABEL_6;
    case 3LL:
    case 4LL:
    case 5LL:
      v5 = *(__int64 **)(a1 + 16);
      if ( v5 )
      {
        v6 = *v5;
        v7[1] = v5 + 1;
        v7[0] = v6;
        result = sub_F6CE20(v7);
      }
      else
      {
LABEL_6:
        result = *(unsigned int *)(a1 + 8);
      }
      break;
    case 6LL:
      result = *(unsigned int *)(a1 + 20);
      break;
  }
  return result;
}
