// Alternative name is '_ZN16MyMessageHandlerC1ERKS_'
void __fastcall MyMessageHandler::MyMessageHandler(MyMessageHandler *this, const MyMessageHandler *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // r14
  signed __int64 v9; // r12
  char *v10; // rcx
  __int64 v11; // r12
  __int64 v12; // [rsp+8h] [rbp-D0h]
  __int64 v13; // [rsp+10h] [rbp-C8h]
  __int64 v14; // [rsp+20h] [rbp-B8h]
  _QWORD **v15; // [rsp+28h] [rbp-B0h]

  CoinMessageHandler::CoinMessageHandler(this, a2);
  *(_QWORD *)this = &off_4D1380;
  v3 = *((_QWORD *)a2 + 205) - *((_QWORD *)a2 + 203);
  *((_QWORD *)this + 200) = *((_QWORD *)a2 + 200);
  v4 = 21 * (((__int64)(*((_QWORD *)a2 + 210) - *((_QWORD *)a2 + 206)) >> 3) - 1);
  v5 = *((_QWORD *)a2 + 207) - *((_QWORD *)a2 + 208);
  *((_QWORD *)this + 201) = 0;
  *((_QWORD *)this + 202) = 0;
  *((_QWORD *)this + 203) = 0;
  *((_QWORD *)this + 204) = 0;
  *((_QWORD *)this + 205) = 0;
  *((_QWORD *)this + 206) = 0;
  *((_QWORD *)this + 207) = 0;
  *((_QWORD *)this + 208) = 0;
  *((_QWORD *)this + 209) = 0;
  *((_QWORD *)this + 210) = 0;
  std::_Deque_base<std::vector<double>>::_M_initialize_map(
    (char *)this + 1608,
    v4 - 0x5555555555555555LL * (v5 >> 3) - 0x5555555555555555LL * (v3 >> 3));
  v6 = *((_QWORD **)this + 203);
  v7 = *((_QWORD *)a2 + 203);
  v12 = *((_QWORD *)a2 + 207);
  v8 = *((_QWORD *)a2 + 205);
  v13 = *((_QWORD *)a2 + 206);
  v15 = *((_QWORD ***)this + 206);
  v14 = *((_QWORD *)this + 205);
  while ( v12 != v7 )
  {
    if ( v6 )
    {
      v9 = *(_QWORD *)(v7 + 8) - *(_QWORD *)v7;
      v10 = nullptr;
      *v6 = 0;
      v6[1] = 0;
      v6[2] = 0;
      if ( v9 >> 3 )
      {
        if ( (unsigned __int64)(v9 >> 3) > 0x1FFFFFFFFFFFFFFFLL )
          std::__throw_bad_alloc();
        v10 = (char *)operator new(v9);
      }
      *v6 = v10;
      v6[1] = v10;
      v6[2] = &v10[v9];
      v11 = *(_QWORD *)(v7 + 8) - *(_QWORD *)v7;
      if ( *(_QWORD *)(v7 + 8) != *(_QWORD *)v7 )
        v10 = (char *)memmove(v10, *(const void **)v7, *(_QWORD *)(v7 + 8) - *(_QWORD *)v7);
      v6[1] = &v10[v11];
    }
    v7 += 24;
    if ( v8 == v7 )
    {
      v6 += 3;
      v7 = *(_QWORD *)(v13 + 8);
      v13 += 8;
      v8 = v7 + 504;
      if ( (_QWORD *)v14 != v6 )
        continue;
    }
    else
    {
      v6 += 3;
      if ( (_QWORD *)v14 != v6 )
        continue;
    }
    v6 = *++v15;
    v14 = (__int64)(*v15 + 63);
  }
  *((_DWORD *)this + 422) = *((_DWORD *)a2 + 422);
}

