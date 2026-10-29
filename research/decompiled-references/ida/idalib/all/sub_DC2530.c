__int64 __fastcall sub_DC2530(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  unsigned __int8 **v8; // rax
  unsigned __int8 **v9; // r14
  __int64 v10; // rax
  __int64 v11; // [rsp+8h] [rbp-40h] BYREF
  __int64 v12; // [rsp+14h] [rbp-34h] BYREF
  char v13; // [rsp+1Ch] [rbp-2Ch]

  v4 = 1;
  if ( !*(_DWORD *)(a3 + 24) )
  {
    v5 = *(unsigned int *)(a3 + 40);
    if ( (unsigned int)v5 > 0xF )
    {
      if ( *(_BYTE *)(*(_QWORD *)(a3 + 32) + v5 + 30) )
      {
        v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 24LL))(*(_QWORD *)(a1 + 24));
        if ( (_BYTE)v4 )
        {
          return 0;
        }
        else
        {
          v11 = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
          v8 = (unsigned __int8 **)sub_E33BA0(a1, &v11, 2372, 0);
          v9 = v8;
          if ( v8 )
          {
            sub_AE9DF0(v8, a4, 2u);
            sub_AE9DF0(v9, 0, 2u);
            v10 = sub_E20720(*(_QWORD *)(a1 + 400), a2);
            v13 = 1;
            v12 = v10;
            sub_AEC610((__int64 *)v9, &v12);
          }
          else
          {
            sub_E20720(*(_QWORD *)(a1 + 400), a2);
          }
        }
      }
    }
  }
  return v4;
}
