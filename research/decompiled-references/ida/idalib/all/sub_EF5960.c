__int64 __fastcall sub_EF5960(__int64 a1)
{
  char v1; // al
  __int64 *v2; // rcx
  int v3; // esi
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // [rsp+10h] [rbp-28h] BYREF
  __int64 *i; // [rsp+18h] [rbp-20h] BYREF
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = sub_EF52A0((_WORD *)a1);
  v2 = (__int64 *)(*(_QWORD *)(a1 + 24)
                 + 8 * (*(unsigned int *)(*(_QWORD *)(a1 + 24) + 4LL) + (unsigned __int64)**(unsigned int **)(a1 + 24))
                 + 16);
  if ( v1 )
  {
    v3 = *(_DWORD *)(a1 + 32);
    v6 = 0;
    v4 = *v2;
    for ( i = &v6; (*(_WORD *)v4 & 0x1FF) == 0xFA; v4 = *(_QWORD *)(v4 + 8LL * *(unsigned int *)(v4 + 8) + 32) )
      ;
    v8[1] = &i;
    v8[0] = sub_EF4DC0;
    sub_EF5870(v4, 1, v3, (__int64)sub_EF4D70, (__int64)v8);
    return v6;
  }
  else
  {
    for ( result = *v2;
          (*(_WORD *)result & 0x1FF) == 0xFA;
          result = *(_QWORD *)(result + 8LL * *(unsigned int *)(result + 8) + 32) )
    {
      ;
    }
  }
  return result;
}
