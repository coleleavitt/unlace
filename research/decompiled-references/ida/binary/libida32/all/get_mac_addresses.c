bool __fastcall get_mac_addresses(__int64 *a1, char a2)
{
  struct ifaddrs *v3; // rbp
  _BOOL4 v4; // r14d
  struct sockaddr *ifa_addr; // r9
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 *v10; // rbx
  __int64 v11; // rbp
  __int64 v12; // r9
  unsigned __int64 v13; // r13
  __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v18; // rax
  __int64 v19; // [rsp+0h] [rbp-68h]
  struct ifaddrs *v20; // [rsp+8h] [rbp-60h]
  __int64 *v21; // [rsp+10h] [rbp-58h]
  _BOOL4 v22; // [rsp+18h] [rbp-50h]
  int v23; // [rsp+1Ch] [rbp-4Ch]
  struct ifaddrs *ifap[9]; // [rsp+20h] [rbp-48h] BYREF

  ifap[1] = (struct ifaddrs *)__readfsqword(0x28u);
  ifap[0] = nullptr;
  if ( getifaddrs(ifap) != -1 )
  {
    v3 = ifap[0];
    if ( ifap[0] )
    {
      v23 = a2 & 2;
      v4 = a2 & 1;
      do
      {
        if ( sub_814C60((__int64)v3, 17, v4) )
        {
          ifa_addr = v3->ifa_addr;
          v6 = (unsigned __int8)ifa_addr->sa_data[9];
          if ( v23 )
            goto LABEL_11;
          if ( ifa_addr->sa_data[9] )
          {
            v7 = 0;
            while ( !ifa_addr->sa_data[v7 + 10] )
            {
              if ( v6 == ++v7 )
                goto LABEL_23;
            }
            if ( v7 < v6 )
            {
LABEL_11:
              v8 = a1[1];
              v9 = *a1;
              if ( a1[2] < (unsigned __int64)(v8 + 1) )
              {
                v18 = qvector_reserve(a1, v9, v8 + 1, 24);
                v8 = a1[1];
                *a1 = v18;
                v9 = v18;
              }
              v10 = (__int64 *)(v9 + 24 * v8);
              *v10 = 0;
              *(_OWORD *)(v10 + 1) = 0;
              ++a1[1];
              if ( v6 )
              {
                v22 = v4;
                v21 = a1;
                v20 = v3;
                v11 = 0;
                while ( 1 )
                {
                  ++v11;
                  sub_357520(v10);
                  if ( v6 == v11 )
                  {
                    v4 = v22;
                    v3 = v20;
                    a1 = v21;
                    break;
                  }
                  v12 = v10[1];
                  if ( v12 )
                  {
                    v13 = v12 + 1;
                    v14 = v10[1];
                    v15 = *v10;
                    --v12;
                    if ( v10[2] >= v13 )
                      goto LABEL_18;
                  }
                  else
                  {
                    v15 = *v10;
                    v14 = 1;
                    v13 = 2;
                    if ( (unsigned __int64)v10[2] >= 2 )
                      goto LABEL_18;
                  }
                  v19 = v12;
                  v16 = qvector_reserve(v10, v15, v13, 1);
                  v12 = v19;
                  *v10 = v16;
                  v15 = v16;
LABEL_18:
                  v10[1] = v13;
                  *(_BYTE *)(v15 + v12) = 58;
                  *(_BYTE *)(*v10 + v14) = 0;
                }
              }
              if ( !v4 )
                break;
            }
          }
        }
LABEL_23:
        v3 = v3->ifa_next;
      }
      while ( v3 );
      v3 = ifap[0];
    }
    freeifaddrs(v3);
  }
  return a1[1] != 0;
}

