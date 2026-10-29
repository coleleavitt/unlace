__int64 __fastcall sub_12EA3C0(__int64 a1, unsigned int a2, int a3, __int64 a4, int a5, int a6, _BYTE *a7, _BYTE *a8)
{
  __int64 v10; // rbx
  __int64 v11; // r13
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  unsigned int v15; // ebx
  __int64 v17; // [rsp-10h] [rbp-B8h]
  int v18; // [rsp+Ch] [rbp-9Ch]
  unsigned __int64 v19; // [rsp+14h] [rbp-94h] BYREF
  char v20; // [rsp+1Ch] [rbp-8Ch]
  unsigned __int8 *v21[17]; // [rsp+20h] [rbp-88h] BYREF

  v10 = *(_QWORD *)(a1 + 168);
  v11 = *(_QWORD *)(a1 + 32);
  v12 = a7 == nullptr ? 1 : 3;
  if ( v10 )
  {
    ++*(_DWORD *)(v10 + 32);
    v13 = sub_1F15770(v10, a5, a6, 0, a2, v12, 0);
    v14 = *(_DWORD *)(v10 + 32);
    *(_DWORD *)(v10 + 32) = v14 - 1;
    if ( v14 == 1 )
    {
      v18 = v13;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v10 + 24) + 8LL))(v10 + 24, v17);
      v13 = v18;
    }
  }
  else
  {
    v13 = sub_1F15770(0, a5, a6, 0, a2, v12, 0);
  }
  v15 = 1;
  if ( v13 )
  {
    if ( v13 == 3 && a7 != nullptr )
    {
      *a7 = 1;
      return 0;
    }
    else
    {
      LOBYTE(v15) = v13 == 2 && a8 != nullptr;
      if ( (_BYTE)v15 )
      {
        v15 = 0;
        *a8 = 1;
      }
      else if ( v13 == 2 || !*(_BYTE *)(v11 + 192) )
      {
        sub_FC70B0((__int64)v21, v11, a3, 37);
        sub_AEC220(v21, *(_BYTE **)a4, *(_QWORD *)(a4 + 8));
        v19 = __PAIR64__(a3, a2);
        v20 = 1;
        sub_AEC610((__int64 *)v21, (__int64 *)&v19);
        sub_AEA040((__int64)v21);
      }
    }
  }
  return v15;
}
