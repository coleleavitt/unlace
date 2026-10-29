unsigned __int64 __fastcall sub_18C2B90(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rsi
  __int64 v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdi
  unsigned int v21; // edx
  __int64 v23; // rdx
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rax
  _QWORD *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned int v33; // edx
  __int64 v34; // rsi

  v4 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *v4;
  if ( (unsigned int)*(unsigned __int8 *)(*v4 + 16) - 57 > 1 )
    v6 = sub_F63050(*v4, v4, a3, a4);
  v7 = sub_A97D20(*(_QWORD *)(a1 + 248), *(_QWORD *)(*(_QWORD *)(v6 + 32) & 0xFFFFFFFFFFFFFFF0LL));
  if ( *(_BYTE *)(v6 + 16) == 58 )
  {
    v8 = *(_QWORD *)(a1 + 248);
    v9 = *(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v9 + 16) == 58
      && (v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL),
          *(_BYTE *)(v23 + 16) == 13)
      && ((*(_WORD *)(v23 + 18) >> 3) & 0x1FF) == 0x1B4 )
    {
      return sub_A76A60(v8, *(_QWORD *)(v8 + 18640), *(_DWORD *)(v6 + 20));
    }
    else
    {
      v10 = v7;
      v11 = sub_A97D20(v8, *(_QWORD *)(*(_QWORD *)(v8 + 18648) & 0xFFFFFFFFFFFFFFF0LL));
      v12 = *(_QWORD *)(a1 + 248);
      if ( v10 == v11 )
      {
        return sub_A76A60(v12, *(_QWORD *)(v12 + 18648), *(_DWORD *)(v6 + 20));
      }
      else
      {
        v13 = sub_A97D20(v12, *(_QWORD *)(*(_QWORD *)(v12 + 18712) & 0xFFFFFFFFFFFFFFF0LL));
        v14 = *(_QWORD *)(a1 + 248);
        if ( v10 == v13 )
        {
          return sub_A76A60(v14, *(_QWORD *)(v14 + 18712), *(_DWORD *)(v6 + 20));
        }
        else
        {
          v15 = sub_A97D20(v14, *(_QWORD *)(*(_QWORD *)(v14 + 18720) & 0xFFFFFFFFFFFFFFF0LL));
          v16 = *(_QWORD *)(a1 + 248);
          if ( v10 == v15 )
          {
            return sub_A76A60(v16, *(_QWORD *)(v16 + 18720), *(_DWORD *)(v6 + 20));
          }
          else
          {
            v17 = sub_A97D20(v16, *(_QWORD *)(*(_QWORD *)(v16 + 18744) & 0xFFFFFFFFFFFFFFF0LL));
            v18 = *(_QWORD *)(a1 + 248);
            if ( v10 == v17 )
            {
              return sub_A76A60(v18, *(_QWORD *)(v18 + 18744), *(_DWORD *)(v6 + 20));
            }
            else
            {
              v19 = sub_A97D20(v18, *(_QWORD *)(*(_QWORD *)(v18 + 18728) & 0xFFFFFFFFFFFFFFF0LL));
              v20 = *(_QWORD *)(a1 + 248);
              v21 = *(_DWORD *)(v6 + 20);
              if ( v10 == v19 )
                return sub_A76A60(v20, *(_QWORD *)(v20 + 18728), v21);
              else
                return sub_A76A60(v20, *(_QWORD *)(v20 + 18736), v21);
            }
          }
        }
      }
    }
  }
  else
  {
    v24 = v7;
    v25 = sub_A97D20(
            *(_QWORD *)(a1 + 248),
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 18744LL) & 0xFFFFFFFFFFFFFFF0LL));
    v26 = *(_QWORD *)(a1 + 248);
    if ( v24 == v25 )
    {
      return sub_A70300(v26, *(_QWORD *)(v26 + 18744), *(_DWORD *)(v6 + 20), 0);
    }
    else
    {
      v27 = sub_A97D20(v26, *(_QWORD *)(*(_QWORD *)(v26 + 18736) & 0xFFFFFFFFFFFFFFF0LL));
      v28 = *(_QWORD *)(a1 + 248);
      if ( v24 == v27 )
      {
        return sub_A70300(v28, *(_QWORD *)(v28 + 18736), *(_DWORD *)(v6 + 20), 0);
      }
      else
      {
        v29 = sub_A97D20(v28, *(_QWORD *)(*(_QWORD *)(v28 + 18728) & 0xFFFFFFFFFFFFFFF0LL));
        v30 = *(_QWORD **)(a1 + 248);
        if ( v24 == v29 )
        {
          v33 = *(_DWORD *)(v6 + 20);
          v34 = v30[2341];
        }
        else
        {
          v31 = sub_A97D20((__int64)v30, *(_QWORD *)(v30[2340] & 0xFFFFFFFFFFFFFFF0LL));
          v30 = *(_QWORD **)(a1 + 248);
          if ( v24 == v31 )
          {
            v33 = *(_DWORD *)(v6 + 20);
            v34 = v30[2340];
          }
          else
          {
            v32 = sub_A97D20((__int64)v30, *(_QWORD *)(v30[2339] & 0xFFFFFFFFFFFFFFF0LL));
            v30 = *(_QWORD **)(a1 + 248);
            v33 = *(_DWORD *)(v6 + 20);
            if ( v24 == v32 )
              v34 = v30[2339];
            else
              v34 = v30[2331];
          }
        }
        return sub_A70300((__int64)v30, v34, v33, 0);
      }
    }
  }
}
