unsigned __int64 __fastcall sub_198570(__int64 a1, __int64 a2)
{
  __int64 *v2; // rdi
  __int64 v3; // rdx
  int v4; // eax
  int v5; // eax
  _DWORD v7[6]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  TWindow::handleEvent();
  v2 = *(__int64 **)(*(_QWORD *)(a1 + 176) + 2632LL);
  if ( v2 )
  {
    v3 = *v2;
    v4 = *(_DWORD *)(a2 + 12);
    v7[0] = 1;
    v5 = v4 - *(_DWORD *)(a2 + 4);
    v7[2] = 14;
    v7[3] = v5;
    v7[1] = v5 - 1;
    (*(void (__fastcall **)(__int64 *, _DWORD *))(v3 + 56))(v2, v7);
  }
  return v8 - __readfsqword(0x28u);
}

