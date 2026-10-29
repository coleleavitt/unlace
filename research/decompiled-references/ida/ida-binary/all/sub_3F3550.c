unsigned __int64 __fastcall sub_3F3550(__int64 a1)
{
  __int64 v1; // rsi
  void (__fastcall *v2)(_DWORD *, __int64, _QWORD, _QWORD, _QWORD *); // rax
  _DWORD v4[4]; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v5; // [rsp+10h] [rbp-B8h]
  _DWORD v6[4]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v7; // [rsp+30h] [rbp-98h]
  _DWORD v8[4]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v9; // [rsp+50h] [rbp-78h]
  _DWORD v10[4]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v11; // [rsp+70h] [rbp-58h]
  _QWORD v12[2]; // [rsp+80h] [rbp-48h] BYREF
  __int64 v13; // [rsp+90h] [rbp-38h]
  unsigned __int64 v14; // [rsp+98h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 112);
  if ( v1 )
  {
    if ( *(_QWORD *)(a1 + 120) )
    {
      v2 = *(void (__fastcall **)(_DWORD *, __int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)v1 + 96LL);
      v12[0] = -1;
      v12[1] = 0;
      v13 = 0;
      v2(v4, v1, 0, 0, v12);
      if ( (v4[0] | v4[1]) >= 0 )
      {
        if ( v5 )
        {
          (*(void (__fastcall **)(_DWORD *, _QWORD, _DWORD *))(**(_QWORD **)(a1 + 120) + 408LL))(
            v6,
            *(_QWORD *)(a1 + 120),
            v4);
          if ( (v6[0] | v6[1]) >= 0 )
          {
            if ( v7 )
            {
              QT::QTreeView::expand(*(_QWORD *)(a1 + 104), v6);
              QT::QAbstractItemView::setCurrentIndex(*(_QWORD *)(a1 + 104), v6);
              (*(void (__fastcall **)(_DWORD *, _QWORD, _QWORD, _QWORD, _DWORD *))(**(_QWORD **)(a1 + 112) + 96LL))(
                v8,
                *(_QWORD *)(a1 + 112),
                0,
                0,
                v4);
              if ( (v8[1] | v8[0]) >= 0 )
              {
                if ( v9 )
                {
                  (*(void (__fastcall **)(_QWORD *, _QWORD, _DWORD *))(**(_QWORD **)(a1 + 120) + 408LL))(
                    v12,
                    *(_QWORD *)(a1 + 120),
                    v8);
                  if ( (HIDWORD(v12[0]) | LODWORD(v12[0])) >= 0 )
                  {
                    if ( v13 )
                      QT::QTreeView::expand(*(_QWORD *)(a1 + 104), v12);
                  }
                }
              }
              (*(void (__fastcall **)(_DWORD *, _QWORD, __int64, _QWORD, _DWORD *))(**(_QWORD **)(a1 + 112) + 96LL))(
                v10,
                *(_QWORD *)(a1 + 112),
                1,
                0,
                v4);
              if ( (v10[1] | v10[0]) >= 0 )
              {
                if ( v11 )
                {
                  (*(void (__fastcall **)(_QWORD *, _QWORD, _DWORD *))(**(_QWORD **)(a1 + 120) + 408LL))(
                    v12,
                    *(_QWORD *)(a1 + 120),
                    v10);
                  if ( (HIDWORD(v12[0]) | LODWORD(v12[0])) >= 0 )
                  {
                    if ( v13 )
                      QT::QTreeView::expand(*(_QWORD *)(a1 + 104), v12);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v14 - __readfsqword(0x28u);
}
