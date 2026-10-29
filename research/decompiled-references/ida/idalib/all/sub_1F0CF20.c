unsigned __int64 __fastcall sub_1F0CF20(_QWORD *a1, unsigned __int64 a2)
{
  char v3; // bl
  unsigned __int64 v4; // rsi
  unsigned int v5; // ebx
  __int64 *v6; // rdi
  __int64 v7; // r13
  __int64 v8; // rbp
  unsigned __int64 v9; // r15
  _QWORD *v10; // rax
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  unsigned int v15; // ecx
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // [rsp+10h] [rbp-48h]
  void (__fastcall *v20)(__int64, unsigned __int64, _QWORD); // [rsp+10h] [rbp-48h]
  __int64 v21; // [rsp+18h] [rbp-40h]

  v3 = a2;
  v4 = a2 >> 3;
  v5 = v3 & 7;
  if ( v4 > 0x200 )
  {
    v7 = (__int64)(a1 + 336);
    v8 = v4 & 0x1FFFFFFF;
    v9 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1[20] + 8LL * (unsigned int)(HIDWORD(a2) - 1)) + 3152LL) + v8);
    if ( (*(_QWORD *)sub_1EC20C0((__int64)(a1 + 336), v9) & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
      v19 = sub_1F0C990((__int64)a1, a2);
      *(_QWORD *)sub_1EC20C0(v7, v9) = v19;
      if ( (*(_QWORD *)sub_1EC20C0(v7, v9) & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      v12 = (_QWORD *)sub_1EC20C0(v7, v9);
      *(_BYTE *)(*(_QWORD *)(*v12 & 0xFFFFFFFFFFFFFFF0LL) + 18LL) |= 4u;
      v13 = a1[8];
      if ( v13 )
      {
        v21 = a1[8];
        v20 = *(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v13 + 40LL);
        v14 = (_QWORD *)sub_1EC20C0(v7, v9);
        v15 = 0;
        if ( a2 == -1 )
          v8 = 0xFFFFFFFFLL;
        else
          v15 = HIDWORD(a2);
        v20(v21, v15 | (unsigned __int64)(v8 << 32), *v14);
      }
    }
    v10 = (_QWORD *)sub_1EC20C0(v7, v9);
    return *v10 & 7 | v5 | *v10 & 0xFFFFFFFFFFFFFFF8LL;
  }
  v6 = (__int64 *)a1[18];
  switch ( v4 )
  {
    case 0uLL:
      return 0;
    case 1uLL:
      v5 |= v6[2329] & 7;
      v16 = v6[2329] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 2uLL:
      v5 |= v6[2330] & 7;
      v16 = v6[2330] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 3uLL:
    case 9uLL:
      v5 |= v6[2331] & 7;
      v16 = v6[2331] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 4uLL:
      v5 |= v6[2344] & 7;
      v16 = v6[2344] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 5uLL:
      v5 |= v6[2345] & 7;
      v16 = v6[2345] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 6uLL:
      v5 |= v6[2346] & 7;
      v16 = v6[2346] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 7uLL:
      v5 |= v6[2347] & 7;
      v16 = v6[2347] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 8uLL:
      v5 |= v6[2348] & 7;
      v16 = v6[2348] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xAuLL:
      v5 |= v6[2338] & 7;
      v16 = v6[2338] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xBuLL:
      v5 |= v6[2332] & 7;
      v16 = v6[2332] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xCuLL:
      v5 |= v6[2339] & 7;
      v16 = v6[2339] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xDuLL:
      v5 |= v6[2340] & 7;
      v16 = v6[2340] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xEuLL:
      v5 |= v6[2341] & 7;
      v16 = v6[2341] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xFuLL:
      v5 |= v6[2342] & 7;
      v16 = v6[2342] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x10uLL:
      v5 |= v6[2350] & 7;
      v16 = v6[2350] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x11uLL:
      v5 |= v6[2351] & 7;
      v16 = v6[2351] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x12uLL:
      v5 |= v6[2352] & 7;
      v16 = v6[2352] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x13uLL:
      v5 |= v6[2385] & 7;
      v16 = v6[2385] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x14uLL:
      v5 |= v6[2384] & 7;
      v16 = v6[2384] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x15uLL:
      v5 |= v6[2349] & 7;
      v16 = v6[2349] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x16uLL:
      v5 |= v6[2343] & 7;
      v16 = v6[2343] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x17uLL:
      v5 |= v6[2383] & 7;
      v16 = v6[2383] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x18uLL:
      v5 |= v6[2336] & 7;
      v16 = v6[2336] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x19uLL:
      v5 |= v6[2337] & 7;
      v16 = v6[2337] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1AuLL:
      v5 |= v6[2392] & 7;
      v16 = v6[2392] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1BuLL:
      v5 |= v6[2393] & 7;
      v16 = v6[2393] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1CuLL:
      v5 |= v6[2394] & 7;
      v16 = v6[2394] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1DuLL:
      v5 |= v6[2388] & 7;
      v16 = v6[2388] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1EuLL:
      v5 |= v6[2386] & 7;
      v16 = v6[2386] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1FuLL:
      v18 = sub_A75AF0((__int64)v6);
      v5 |= v18 & 7;
      v16 = v18 & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x20uLL:
      v17 = sub_A79400(v6);
      v5 |= v17 & 7;
      v16 = v17 & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x21uLL:
      v5 |= v6[2379] & 7;
      v16 = v6[2379] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x22uLL:
      v5 |= v6[2391] & 7;
      v16 = v6[2391] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x23uLL:
      v5 |= v6[2390] & 7;
      v16 = v6[2390] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x24uLL:
      v5 |= v6[2389] & 7;
      v16 = v6[2389] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x25uLL:
      v5 |= v6[2433] & 7;
      v16 = v6[2433] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x26uLL:
      v5 |= v6[2434] & 7;
      v16 = v6[2434] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x27uLL:
      v5 |= v6[2432] & 7;
      v16 = v6[2432] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x28uLL:
      v5 |= v6[2435] & 7;
      v16 = v6[2435] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x29uLL:
      v5 |= v6[2436] & 7;
      v16 = v6[2436] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x2AuLL:
      v5 |= v6[2438] & 7;
      v16 = v6[2438] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x2BuLL:
      v5 |= v6[2353] & 7;
      v16 = v6[2353] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x2CuLL:
      v5 |= v6[2381] & 7;
      v16 = v6[2381] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x2DuLL:
      v5 |= v6[2335] & 7;
      v16 = v6[2335] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x2EuLL:
      v5 |= v6[2355] & 7;
      v16 = v6[2355] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x2FuLL:
      v5 |= v6[2356] & 7;
      v16 = v6[2356] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x30uLL:
      v5 |= v6[2357] & 7;
      v16 = v6[2357] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x31uLL:
      v5 |= v6[2358] & 7;
      v16 = v6[2358] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x32uLL:
      v5 |= v6[2359] & 7;
      v16 = v6[2359] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x33uLL:
      v5 |= v6[2360] & 7;
      v16 = v6[2360] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x34uLL:
      v5 |= v6[2361] & 7;
      v16 = v6[2361] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x35uLL:
      v5 |= v6[2362] & 7;
      v16 = v6[2362] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x36uLL:
      v5 |= v6[2363] & 7;
      v16 = v6[2363] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x37uLL:
      v5 |= v6[2364] & 7;
      v16 = v6[2364] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x38uLL:
      v5 |= v6[2365] & 7;
      v16 = v6[2365] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x39uLL:
      v5 |= v6[2366] & 7;
      v16 = v6[2366] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x3AuLL:
      v5 |= v6[2367] & 7;
      v16 = v6[2367] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x3BuLL:
      v5 |= v6[2368] & 7;
      v16 = v6[2368] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x3CuLL:
      v5 |= v6[2369] & 7;
      v16 = v6[2369] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x3DuLL:
      v5 |= v6[2370] & 7;
      v16 = v6[2370] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x3EuLL:
      v5 |= v6[2371] & 7;
      v16 = v6[2371] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x3FuLL:
      v5 |= v6[2372] & 7;
      v16 = v6[2372] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x40uLL:
      v5 |= v6[2373] & 7;
      v16 = v6[2373] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x41uLL:
      v5 |= v6[2374] & 7;
      v16 = v6[2374] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x42uLL:
      v5 |= v6[2375] & 7;
      v16 = v6[2375] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x43uLL:
      v5 |= v6[2376] & 7;
      v16 = v6[2376] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x44uLL:
      v5 |= v6[2377] & 7;
      v16 = v6[2377] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x45uLL:
      v5 |= v6[2378] & 7;
      v16 = v6[2378] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x46uLL:
      v5 |= v6[2439] & 7;
      v16 = v6[2439] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x47uLL:
      v5 |= v6[2440] & 7;
      v16 = v6[2440] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x48uLL:
      v5 |= v6[2437] & 7;
      v16 = v6[2437] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x49uLL:
      v5 |= v6[2380] & 7;
      v16 = v6[2380] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x4AuLL:
      v5 |= v6[2354] & 7;
      v16 = v6[2354] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x4BuLL:
      v5 |= v6[2396] & 7;
      v16 = v6[2396] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x4CuLL:
      v5 |= v6[2397] & 7;
      v16 = v6[2397] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x4DuLL:
      v5 |= v6[2398] & 7;
      v16 = v6[2398] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x4EuLL:
      v5 |= v6[2399] & 7;
      v16 = v6[2399] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x4FuLL:
      v5 |= v6[2400] & 7;
      v16 = v6[2400] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x50uLL:
      v5 |= v6[2401] & 7;
      v16 = v6[2401] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x51uLL:
      v5 |= v6[2402] & 7;
      v16 = v6[2402] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x52uLL:
      v5 |= v6[2403] & 7;
      v16 = v6[2403] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x53uLL:
      v5 |= v6[2404] & 7;
      v16 = v6[2404] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x54uLL:
      v5 |= v6[2405] & 7;
      v16 = v6[2405] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x55uLL:
      v5 |= v6[2406] & 7;
      v16 = v6[2406] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x56uLL:
      v5 |= v6[2407] & 7;
      v16 = v6[2407] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x57uLL:
      v5 |= v6[2408] & 7;
      v16 = v6[2408] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x58uLL:
      v5 |= v6[2409] & 7;
      v16 = v6[2409] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x59uLL:
      v5 |= v6[2410] & 7;
      v16 = v6[2410] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x5AuLL:
      v5 |= v6[2411] & 7;
      v16 = v6[2411] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x5BuLL:
      v5 |= v6[2412] & 7;
      v16 = v6[2412] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x5CuLL:
      v5 |= v6[2413] & 7;
      v16 = v6[2413] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x5DuLL:
      v5 |= v6[2414] & 7;
      v16 = v6[2414] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x5EuLL:
      v5 |= v6[2415] & 7;
      v16 = v6[2415] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x5FuLL:
      v5 |= v6[2416] & 7;
      v16 = v6[2416] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x60uLL:
      v5 |= v6[2417] & 7;
      v16 = v6[2417] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x61uLL:
      v5 |= v6[2418] & 7;
      v16 = v6[2418] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x62uLL:
      v5 |= v6[2419] & 7;
      v16 = v6[2419] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x63uLL:
      v5 |= v6[2420] & 7;
      v16 = v6[2420] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x64uLL:
      v5 |= v6[2421] & 7;
      v16 = v6[2421] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x65uLL:
      v5 |= v6[2422] & 7;
      v16 = v6[2422] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x66uLL:
      v5 |= v6[2423] & 7;
      v16 = v6[2423] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x67uLL:
      v5 |= v6[2424] & 7;
      v16 = v6[2424] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x68uLL:
      v5 |= v6[2425] & 7;
      v16 = v6[2425] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x69uLL:
      v5 |= v6[2426] & 7;
      v16 = v6[2426] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x6AuLL:
      v5 |= v6[2427] & 7;
      v16 = v6[2427] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x6BuLL:
      v5 |= v6[2428] & 7;
      v16 = v6[2428] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x6CuLL:
      v5 |= v6[2429] & 7;
      v16 = v6[2429] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x6DuLL:
      v5 |= v6[2430] & 7;
      v16 = v6[2430] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x6EuLL:
      v5 |= v6[2431] & 7;
      v16 = v6[2431] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x6FuLL:
      v5 |= v6[2441] & 7;
      v16 = v6[2441] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x70uLL:
      v5 |= v6[2442] & 7;
      v16 = v6[2442] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x71uLL:
      v5 |= v6[2443] & 7;
      v16 = v6[2443] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x72uLL:
      v5 |= v6[2444] & 7;
      v16 = v6[2444] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x73uLL:
      v5 |= v6[2445] & 7;
      v16 = v6[2445] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x74uLL:
      v5 |= v6[2446] & 7;
      v16 = v6[2446] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x75uLL:
      v5 |= v6[2447] & 7;
      v16 = v6[2447] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x76uLL:
      v5 |= v6[2448] & 7;
      v16 = v6[2448] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x77uLL:
      v5 |= v6[2449] & 7;
      v16 = v6[2449] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x78uLL:
      v5 |= v6[2450] & 7;
      v16 = v6[2450] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x79uLL:
      v5 |= v6[2451] & 7;
      v16 = v6[2451] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x7AuLL:
      v5 |= v6[2452] & 7;
      v16 = v6[2452] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x7BuLL:
      v5 |= v6[2453] & 7;
      v16 = v6[2453] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x7CuLL:
      v5 |= v6[2454] & 7;
      v16 = v6[2454] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x7DuLL:
      v5 |= v6[2455] & 7;
      v16 = v6[2455] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x7EuLL:
      v5 |= v6[2456] & 7;
      v16 = v6[2456] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x7FuLL:
      v5 |= v6[2457] & 7;
      v16 = v6[2457] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x80uLL:
      v5 |= v6[2458] & 7;
      v16 = v6[2458] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x81uLL:
      v5 |= v6[2459] & 7;
      v16 = v6[2459] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x82uLL:
      v5 |= v6[2460] & 7;
      v16 = v6[2460] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x83uLL:
      v5 |= v6[2461] & 7;
      v16 = v6[2461] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x84uLL:
      v5 |= v6[2462] & 7;
      v16 = v6[2462] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x85uLL:
      v5 |= v6[2463] & 7;
      v16 = v6[2463] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x86uLL:
      v5 |= v6[2464] & 7;
      v16 = v6[2464] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x87uLL:
      v5 |= v6[2465] & 7;
      v16 = v6[2465] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x88uLL:
      v5 |= v6[2466] & 7;
      v16 = v6[2466] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x89uLL:
      v5 |= v6[2467] & 7;
      v16 = v6[2467] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x8AuLL:
      v5 |= v6[2468] & 7;
      v16 = v6[2468] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x8BuLL:
      v5 |= v6[2469] & 7;
      v16 = v6[2469] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x8CuLL:
      v5 |= v6[2470] & 7;
      v16 = v6[2470] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x8DuLL:
      v5 |= v6[2471] & 7;
      v16 = v6[2471] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x8EuLL:
      v5 |= v6[2472] & 7;
      v16 = v6[2472] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x8FuLL:
      v5 |= v6[2473] & 7;
      v16 = v6[2473] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x90uLL:
      v5 |= v6[2474] & 7;
      v16 = v6[2474] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x91uLL:
      v5 |= v6[2475] & 7;
      v16 = v6[2475] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x92uLL:
      v5 |= v6[2476] & 7;
      v16 = v6[2476] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x93uLL:
      v5 |= v6[2477] & 7;
      v16 = v6[2477] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x94uLL:
      v5 |= v6[2478] & 7;
      v16 = v6[2478] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x95uLL:
      v5 |= v6[2479] & 7;
      v16 = v6[2479] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x96uLL:
      v5 |= v6[2480] & 7;
      v16 = v6[2480] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x97uLL:
      v5 |= v6[2481] & 7;
      v16 = v6[2481] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x98uLL:
      v5 |= v6[2482] & 7;
      v16 = v6[2482] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x99uLL:
      v5 |= v6[2483] & 7;
      v16 = v6[2483] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x9AuLL:
      v5 |= v6[2484] & 7;
      v16 = v6[2484] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x9BuLL:
      v5 |= v6[2485] & 7;
      v16 = v6[2485] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x9CuLL:
      v5 |= v6[2486] & 7;
      v16 = v6[2486] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x9DuLL:
      v5 |= v6[2487] & 7;
      v16 = v6[2487] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x9EuLL:
      v5 |= v6[2488] & 7;
      v16 = v6[2488] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x9FuLL:
      v5 |= v6[2489] & 7;
      v16 = v6[2489] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xA0uLL:
      v5 |= v6[2490] & 7;
      v16 = v6[2490] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xA1uLL:
      v5 |= v6[2491] & 7;
      v16 = v6[2491] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xA2uLL:
      v5 |= v6[2492] & 7;
      v16 = v6[2492] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xA3uLL:
      v5 |= v6[2493] & 7;
      v16 = v6[2493] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xA4uLL:
      v5 |= v6[2494] & 7;
      v16 = v6[2494] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xA5uLL:
      v5 |= v6[2495] & 7;
      v16 = v6[2495] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xA6uLL:
      v5 |= v6[2496] & 7;
      v16 = v6[2496] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xA7uLL:
      v5 |= v6[2497] & 7;
      v16 = v6[2497] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xA8uLL:
      v5 |= v6[2498] & 7;
      v16 = v6[2498] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xA9uLL:
      v5 |= v6[2499] & 7;
      v16 = v6[2499] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xAAuLL:
      v5 |= v6[2500] & 7;
      v16 = v6[2500] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xABuLL:
      v5 |= v6[2501] & 7;
      v16 = v6[2501] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xACuLL:
      v5 |= v6[2502] & 7;
      v16 = v6[2502] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xADuLL:
      v5 |= v6[2503] & 7;
      v16 = v6[2503] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xAEuLL:
      v5 |= v6[2504] & 7;
      v16 = v6[2504] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xAFuLL:
      v5 |= v6[2505] & 7;
      v16 = v6[2505] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xB0uLL:
      v5 |= v6[2506] & 7;
      v16 = v6[2506] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xB1uLL:
      v5 |= v6[2507] & 7;
      v16 = v6[2507] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xB2uLL:
      v5 |= v6[2508] & 7;
      v16 = v6[2508] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xB3uLL:
      v5 |= v6[2509] & 7;
      v16 = v6[2509] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xB4uLL:
      v5 |= v6[2510] & 7;
      v16 = v6[2510] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xB5uLL:
      v5 |= v6[2511] & 7;
      v16 = v6[2511] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xB6uLL:
      v5 |= v6[2512] & 7;
      v16 = v6[2512] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xB7uLL:
      v5 |= v6[2513] & 7;
      v16 = v6[2513] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xB8uLL:
      v5 |= v6[2514] & 7;
      v16 = v6[2514] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xB9uLL:
      v5 |= v6[2515] & 7;
      v16 = v6[2515] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xBAuLL:
      v5 |= v6[2516] & 7;
      v16 = v6[2516] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xBBuLL:
      v5 |= v6[2517] & 7;
      v16 = v6[2517] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xBCuLL:
      v5 |= v6[2518] & 7;
      v16 = v6[2518] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xBDuLL:
      v5 |= v6[2519] & 7;
      v16 = v6[2519] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xBEuLL:
      v5 |= v6[2520] & 7;
      v16 = v6[2520] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xBFuLL:
      v5 |= v6[2521] & 7;
      v16 = v6[2521] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xC0uLL:
      v5 |= v6[2522] & 7;
      v16 = v6[2522] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xC1uLL:
      v5 |= v6[2523] & 7;
      v16 = v6[2523] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xC2uLL:
      v5 |= v6[2524] & 7;
      v16 = v6[2524] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xC3uLL:
      v5 |= v6[2525] & 7;
      v16 = v6[2525] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xC4uLL:
      v5 |= v6[2526] & 7;
      v16 = v6[2526] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xC5uLL:
      v5 |= v6[2527] & 7;
      v16 = v6[2527] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xC6uLL:
      v5 |= v6[2528] & 7;
      v16 = v6[2528] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xC7uLL:
      v5 |= v6[2529] & 7;
      v16 = v6[2529] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xC8uLL:
      v5 |= v6[2530] & 7;
      v16 = v6[2530] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xC9uLL:
      v5 |= v6[2531] & 7;
      v16 = v6[2531] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xCAuLL:
      v5 |= v6[2532] & 7;
      v16 = v6[2532] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xCBuLL:
      v5 |= v6[2533] & 7;
      v16 = v6[2533] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xCCuLL:
      v5 |= v6[2534] & 7;
      v16 = v6[2534] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xCDuLL:
      v5 |= v6[2535] & 7;
      v16 = v6[2535] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xCEuLL:
      v5 |= v6[2536] & 7;
      v16 = v6[2536] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xCFuLL:
      v5 |= v6[2537] & 7;
      v16 = v6[2537] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xD0uLL:
      v5 |= v6[2538] & 7;
      v16 = v6[2538] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xD1uLL:
      v5 |= v6[2539] & 7;
      v16 = v6[2539] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xD2uLL:
      v5 |= v6[2540] & 7;
      v16 = v6[2540] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xD3uLL:
      v5 |= v6[2541] & 7;
      v16 = v6[2541] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xD4uLL:
      v5 |= v6[2542] & 7;
      v16 = v6[2542] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xD5uLL:
      v5 |= v6[2543] & 7;
      v16 = v6[2543] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xD6uLL:
      v5 |= v6[2544] & 7;
      v16 = v6[2544] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xD7uLL:
      v5 |= v6[2545] & 7;
      v16 = v6[2545] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xD8uLL:
      v5 |= v6[2546] & 7;
      v16 = v6[2546] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xD9uLL:
      v5 |= v6[2547] & 7;
      v16 = v6[2547] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xDAuLL:
      v5 |= v6[2548] & 7;
      v16 = v6[2548] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xDBuLL:
      v5 |= v6[2549] & 7;
      v16 = v6[2549] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xDCuLL:
      v5 |= v6[2550] & 7;
      v16 = v6[2550] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xDDuLL:
      v5 |= v6[2551] & 7;
      v16 = v6[2551] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xDEuLL:
      v5 |= v6[2552] & 7;
      v16 = v6[2552] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xDFuLL:
      v5 |= v6[2553] & 7;
      v16 = v6[2553] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xE0uLL:
      v5 |= v6[2554] & 7;
      v16 = v6[2554] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xE1uLL:
      v5 |= v6[2555] & 7;
      v16 = v6[2555] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xE2uLL:
      v5 |= v6[2556] & 7;
      v16 = v6[2556] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xE3uLL:
      v5 |= v6[2557] & 7;
      v16 = v6[2557] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xE4uLL:
      v5 |= v6[2558] & 7;
      v16 = v6[2558] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xE5uLL:
      v5 |= v6[2559] & 7;
      v16 = v6[2559] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xE6uLL:
      v5 |= v6[2560] & 7;
      v16 = v6[2560] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xE7uLL:
      v5 |= v6[2561] & 7;
      v16 = v6[2561] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xE8uLL:
      v5 |= v6[2562] & 7;
      v16 = v6[2562] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xE9uLL:
      v5 |= v6[2563] & 7;
      v16 = v6[2563] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xEAuLL:
      v5 |= v6[2564] & 7;
      v16 = v6[2564] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xEBuLL:
      v5 |= v6[2565] & 7;
      v16 = v6[2565] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xECuLL:
      v5 |= v6[2566] & 7;
      v16 = v6[2566] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xEDuLL:
      v5 |= v6[2567] & 7;
      v16 = v6[2567] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xEEuLL:
      v5 |= v6[2568] & 7;
      v16 = v6[2568] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xEFuLL:
      v5 |= v6[2569] & 7;
      v16 = v6[2569] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xF0uLL:
      v5 |= v6[2570] & 7;
      v16 = v6[2570] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xF1uLL:
      v5 |= v6[2571] & 7;
      v16 = v6[2571] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xF2uLL:
      v5 |= v6[2572] & 7;
      v16 = v6[2572] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xF3uLL:
      v5 |= v6[2573] & 7;
      v16 = v6[2573] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xF4uLL:
      v5 |= v6[2574] & 7;
      v16 = v6[2574] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xF5uLL:
      v5 |= v6[2575] & 7;
      v16 = v6[2575] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xF6uLL:
      v5 |= v6[2576] & 7;
      v16 = v6[2576] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xF7uLL:
      v5 |= v6[2577] & 7;
      v16 = v6[2577] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xF8uLL:
      v5 |= v6[2578] & 7;
      v16 = v6[2578] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xF9uLL:
      v5 |= v6[2579] & 7;
      v16 = v6[2579] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xFAuLL:
      v5 |= v6[2580] & 7;
      v16 = v6[2580] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xFBuLL:
      v5 |= v6[2581] & 7;
      v16 = v6[2581] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xFCuLL:
      v5 |= v6[2582] & 7;
      v16 = v6[2582] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xFDuLL:
      v5 |= v6[2583] & 7;
      v16 = v6[2583] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xFEuLL:
      v5 |= v6[2584] & 7;
      v16 = v6[2584] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0xFFuLL:
      v5 |= v6[2585] & 7;
      v16 = v6[2585] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x100uLL:
      v5 |= v6[2586] & 7;
      v16 = v6[2586] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x101uLL:
      v5 |= v6[2587] & 7;
      v16 = v6[2587] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x102uLL:
      v5 |= v6[2588] & 7;
      v16 = v6[2588] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x103uLL:
      v5 |= v6[2589] & 7;
      v16 = v6[2589] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x104uLL:
      v5 |= v6[2590] & 7;
      v16 = v6[2590] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x105uLL:
      v5 |= v6[2591] & 7;
      v16 = v6[2591] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x106uLL:
      v5 |= v6[2592] & 7;
      v16 = v6[2592] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x107uLL:
      v5 |= v6[2593] & 7;
      v16 = v6[2593] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x108uLL:
      v5 |= v6[2594] & 7;
      v16 = v6[2594] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x109uLL:
      v5 |= v6[2595] & 7;
      v16 = v6[2595] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x10AuLL:
      v5 |= v6[2596] & 7;
      v16 = v6[2596] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x10BuLL:
      v5 |= v6[2597] & 7;
      v16 = v6[2597] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x10CuLL:
      v5 |= v6[2598] & 7;
      v16 = v6[2598] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x10DuLL:
      v5 |= v6[2599] & 7;
      v16 = v6[2599] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x10EuLL:
      v5 |= v6[2600] & 7;
      v16 = v6[2600] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x10FuLL:
      v5 |= v6[2601] & 7;
      v16 = v6[2601] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x110uLL:
      v5 |= v6[2602] & 7;
      v16 = v6[2602] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x111uLL:
      v5 |= v6[2603] & 7;
      v16 = v6[2603] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x112uLL:
      v5 |= v6[2604] & 7;
      v16 = v6[2604] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x113uLL:
      v5 |= v6[2605] & 7;
      v16 = v6[2605] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x114uLL:
      v5 |= v6[2606] & 7;
      v16 = v6[2606] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x115uLL:
      v5 |= v6[2607] & 7;
      v16 = v6[2607] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x116uLL:
      v5 |= v6[2608] & 7;
      v16 = v6[2608] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x117uLL:
      v5 |= v6[2609] & 7;
      v16 = v6[2609] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x118uLL:
      v5 |= v6[2610] & 7;
      v16 = v6[2610] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x119uLL:
      v5 |= v6[2611] & 7;
      v16 = v6[2611] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x11AuLL:
      v5 |= v6[2612] & 7;
      v16 = v6[2612] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x11BuLL:
      v5 |= v6[2613] & 7;
      v16 = v6[2613] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x11CuLL:
      v5 |= v6[2614] & 7;
      v16 = v6[2614] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x11DuLL:
      v5 |= v6[2615] & 7;
      v16 = v6[2615] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x11EuLL:
      v5 |= v6[2616] & 7;
      v16 = v6[2616] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x11FuLL:
      v5 |= v6[2617] & 7;
      v16 = v6[2617] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x120uLL:
      v5 |= v6[2618] & 7;
      v16 = v6[2618] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x121uLL:
      v5 |= v6[2619] & 7;
      v16 = v6[2619] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x122uLL:
      v5 |= v6[2620] & 7;
      v16 = v6[2620] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x123uLL:
      v5 |= v6[2621] & 7;
      v16 = v6[2621] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x124uLL:
      v5 |= v6[2622] & 7;
      v16 = v6[2622] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x125uLL:
      v5 |= v6[2623] & 7;
      v16 = v6[2623] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x126uLL:
      v5 |= v6[2624] & 7;
      v16 = v6[2624] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x127uLL:
      v5 |= v6[2625] & 7;
      v16 = v6[2625] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x128uLL:
      v5 |= v6[2626] & 7;
      v16 = v6[2626] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x129uLL:
      v5 |= v6[2627] & 7;
      v16 = v6[2627] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x12AuLL:
      v5 |= v6[2628] & 7;
      v16 = v6[2628] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x12BuLL:
      v5 |= v6[2629] & 7;
      v16 = v6[2629] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x12CuLL:
      v5 |= v6[2630] & 7;
      v16 = v6[2630] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x12DuLL:
      v5 |= v6[2631] & 7;
      v16 = v6[2631] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x12EuLL:
      v5 |= v6[2632] & 7;
      v16 = v6[2632] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x12FuLL:
      v5 |= v6[2633] & 7;
      v16 = v6[2633] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x130uLL:
      v5 |= v6[2634] & 7;
      v16 = v6[2634] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x131uLL:
      v5 |= v6[2635] & 7;
      v16 = v6[2635] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x132uLL:
      v5 |= v6[2636] & 7;
      v16 = v6[2636] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x133uLL:
      v5 |= v6[2637] & 7;
      v16 = v6[2637] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x134uLL:
      v5 |= v6[2638] & 7;
      v16 = v6[2638] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x135uLL:
      v5 |= v6[2639] & 7;
      v16 = v6[2639] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x136uLL:
      v5 |= v6[2640] & 7;
      v16 = v6[2640] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x137uLL:
      v5 |= v6[2641] & 7;
      v16 = v6[2641] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x138uLL:
      v5 |= v6[2642] & 7;
      v16 = v6[2642] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x139uLL:
      v5 |= v6[2643] & 7;
      v16 = v6[2643] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x13AuLL:
      v5 |= v6[2644] & 7;
      v16 = v6[2644] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x13BuLL:
      v5 |= v6[2645] & 7;
      v16 = v6[2645] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x13CuLL:
      v5 |= v6[2646] & 7;
      v16 = v6[2646] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x13DuLL:
      v5 |= v6[2647] & 7;
      v16 = v6[2647] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x13EuLL:
      v5 |= v6[2648] & 7;
      v16 = v6[2648] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x13FuLL:
      v5 |= v6[2649] & 7;
      v16 = v6[2649] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x140uLL:
      v5 |= v6[2650] & 7;
      v16 = v6[2650] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x141uLL:
      v5 |= v6[2651] & 7;
      v16 = v6[2651] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x142uLL:
      v5 |= v6[2652] & 7;
      v16 = v6[2652] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x143uLL:
      v5 |= v6[2653] & 7;
      v16 = v6[2653] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x144uLL:
      v5 |= v6[2654] & 7;
      v16 = v6[2654] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x145uLL:
      v5 |= v6[2655] & 7;
      v16 = v6[2655] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x146uLL:
      v5 |= v6[2656] & 7;
      v16 = v6[2656] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x147uLL:
      v5 |= v6[2657] & 7;
      v16 = v6[2657] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x148uLL:
      v5 |= v6[2658] & 7;
      v16 = v6[2658] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x149uLL:
      v5 |= v6[2659] & 7;
      v16 = v6[2659] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x14AuLL:
      v5 |= v6[2660] & 7;
      v16 = v6[2660] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x14BuLL:
      v5 |= v6[2661] & 7;
      v16 = v6[2661] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x14CuLL:
      v5 |= v6[2662] & 7;
      v16 = v6[2662] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x14DuLL:
      v5 |= v6[2663] & 7;
      v16 = v6[2663] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x14EuLL:
      v5 |= v6[2664] & 7;
      v16 = v6[2664] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x14FuLL:
      v5 |= v6[2665] & 7;
      v16 = v6[2665] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x150uLL:
      v5 |= v6[2666] & 7;
      v16 = v6[2666] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x151uLL:
      v5 |= v6[2667] & 7;
      v16 = v6[2667] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x152uLL:
      v5 |= v6[2668] & 7;
      v16 = v6[2668] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x153uLL:
      v5 |= v6[2669] & 7;
      v16 = v6[2669] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x154uLL:
      v5 |= v6[2670] & 7;
      v16 = v6[2670] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x155uLL:
      v5 |= v6[2671] & 7;
      v16 = v6[2671] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x156uLL:
      v5 |= v6[2672] & 7;
      v16 = v6[2672] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x157uLL:
      v5 |= v6[2673] & 7;
      v16 = v6[2673] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x158uLL:
      v5 |= v6[2674] & 7;
      v16 = v6[2674] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x159uLL:
      v5 |= v6[2675] & 7;
      v16 = v6[2675] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x15AuLL:
      v5 |= v6[2676] & 7;
      v16 = v6[2676] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x15BuLL:
      v5 |= v6[2677] & 7;
      v16 = v6[2677] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x15CuLL:
      v5 |= v6[2678] & 7;
      v16 = v6[2678] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x15DuLL:
      v5 |= v6[2679] & 7;
      v16 = v6[2679] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x15EuLL:
      v5 |= v6[2680] & 7;
      v16 = v6[2680] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x15FuLL:
      v5 |= v6[2681] & 7;
      v16 = v6[2681] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x160uLL:
      v5 |= v6[2682] & 7;
      v16 = v6[2682] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x161uLL:
      v5 |= v6[2683] & 7;
      v16 = v6[2683] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x162uLL:
      v5 |= v6[2684] & 7;
      v16 = v6[2684] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x163uLL:
      v5 |= v6[2685] & 7;
      v16 = v6[2685] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x164uLL:
      v5 |= v6[2686] & 7;
      v16 = v6[2686] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x165uLL:
      v5 |= v6[2687] & 7;
      v16 = v6[2687] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x166uLL:
      v5 |= v6[2688] & 7;
      v16 = v6[2688] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x167uLL:
      v5 |= v6[2689] & 7;
      v16 = v6[2689] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x168uLL:
      v5 |= v6[2690] & 7;
      v16 = v6[2690] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x169uLL:
      v5 |= v6[2691] & 7;
      v16 = v6[2691] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x16AuLL:
      v5 |= v6[2692] & 7;
      v16 = v6[2692] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x16BuLL:
      v5 |= v6[2693] & 7;
      v16 = v6[2693] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x16CuLL:
      v5 |= v6[2694] & 7;
      v16 = v6[2694] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x16DuLL:
      v5 |= v6[2695] & 7;
      v16 = v6[2695] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x16EuLL:
      v5 |= v6[2696] & 7;
      v16 = v6[2696] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x16FuLL:
      v5 |= v6[2697] & 7;
      v16 = v6[2697] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x170uLL:
      v5 |= v6[2698] & 7;
      v16 = v6[2698] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x171uLL:
      v5 |= v6[2699] & 7;
      v16 = v6[2699] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x172uLL:
      v5 |= v6[2700] & 7;
      v16 = v6[2700] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x173uLL:
      v5 |= v6[2701] & 7;
      v16 = v6[2701] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x174uLL:
      v5 |= v6[2702] & 7;
      v16 = v6[2702] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x175uLL:
      v5 |= v6[2703] & 7;
      v16 = v6[2703] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x176uLL:
      v5 |= v6[2704] & 7;
      v16 = v6[2704] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x177uLL:
      v5 |= v6[2705] & 7;
      v16 = v6[2705] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x178uLL:
      v5 |= v6[2706] & 7;
      v16 = v6[2706] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x179uLL:
      v5 |= v6[2707] & 7;
      v16 = v6[2707] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x17AuLL:
      v5 |= v6[2708] & 7;
      v16 = v6[2708] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x17BuLL:
      v5 |= v6[2709] & 7;
      v16 = v6[2709] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x17CuLL:
      v5 |= v6[2710] & 7;
      v16 = v6[2710] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x17DuLL:
      v5 |= v6[2711] & 7;
      v16 = v6[2711] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x17EuLL:
      v5 |= v6[2712] & 7;
      v16 = v6[2712] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x17FuLL:
      v5 |= v6[2713] & 7;
      v16 = v6[2713] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x180uLL:
      v5 |= v6[2714] & 7;
      v16 = v6[2714] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x181uLL:
      v5 |= v6[2715] & 7;
      v16 = v6[2715] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x182uLL:
      v5 |= v6[2716] & 7;
      v16 = v6[2716] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x183uLL:
      v5 |= v6[2717] & 7;
      v16 = v6[2717] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x184uLL:
      v5 |= v6[2718] & 7;
      v16 = v6[2718] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x185uLL:
      v5 |= v6[2719] & 7;
      v16 = v6[2719] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x186uLL:
      v5 |= v6[2720] & 7;
      v16 = v6[2720] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x187uLL:
      v5 |= v6[2721] & 7;
      v16 = v6[2721] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x188uLL:
      v5 |= v6[2722] & 7;
      v16 = v6[2722] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x189uLL:
      v5 |= v6[2723] & 7;
      v16 = v6[2723] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x18AuLL:
      v5 |= v6[2724] & 7;
      v16 = v6[2724] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x18BuLL:
      v5 |= v6[2725] & 7;
      v16 = v6[2725] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x18CuLL:
      v5 |= v6[2726] & 7;
      v16 = v6[2726] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x18DuLL:
      v5 |= v6[2727] & 7;
      v16 = v6[2727] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x18EuLL:
      v5 |= v6[2728] & 7;
      v16 = v6[2728] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x18FuLL:
      v5 |= v6[2729] & 7;
      v16 = v6[2729] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x190uLL:
      v5 |= v6[2730] & 7;
      v16 = v6[2730] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x191uLL:
      v5 |= v6[2731] & 7;
      v16 = v6[2731] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x192uLL:
      v5 |= v6[2732] & 7;
      v16 = v6[2732] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x193uLL:
      v5 |= v6[2733] & 7;
      v16 = v6[2733] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x194uLL:
      v5 |= v6[2734] & 7;
      v16 = v6[2734] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x195uLL:
      v5 |= v6[2735] & 7;
      v16 = v6[2735] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x196uLL:
      v5 |= v6[2736] & 7;
      v16 = v6[2736] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x197uLL:
      v5 |= v6[2737] & 7;
      v16 = v6[2737] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x198uLL:
      v5 |= v6[2738] & 7;
      v16 = v6[2738] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x199uLL:
      v5 |= v6[2739] & 7;
      v16 = v6[2739] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x19AuLL:
      v5 |= v6[2740] & 7;
      v16 = v6[2740] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x19BuLL:
      v5 |= v6[2741] & 7;
      v16 = v6[2741] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x19CuLL:
      v5 |= v6[2742] & 7;
      v16 = v6[2742] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x19DuLL:
      v5 |= v6[2743] & 7;
      v16 = v6[2743] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x19EuLL:
      v5 |= v6[2744] & 7;
      v16 = v6[2744] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x19FuLL:
      v5 |= v6[2745] & 7;
      v16 = v6[2745] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1A0uLL:
      v5 |= v6[2746] & 7;
      v16 = v6[2746] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1A1uLL:
      v5 |= v6[2747] & 7;
      v16 = v6[2747] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1A2uLL:
      v5 |= v6[2748] & 7;
      v16 = v6[2748] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1A3uLL:
      v5 |= v6[2749] & 7;
      v16 = v6[2749] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1A4uLL:
      v5 |= v6[2750] & 7;
      v16 = v6[2750] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1A5uLL:
      v5 |= v6[2751] & 7;
      v16 = v6[2751] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1A6uLL:
      v5 |= v6[2752] & 7;
      v16 = v6[2752] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1A7uLL:
      v5 |= v6[2753] & 7;
      v16 = v6[2753] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1A8uLL:
      v5 |= v6[2754] & 7;
      v16 = v6[2754] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1A9uLL:
      v5 |= v6[2755] & 7;
      v16 = v6[2755] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1AAuLL:
      v5 |= v6[2756] & 7;
      v16 = v6[2756] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1ABuLL:
      v5 |= v6[2757] & 7;
      v16 = v6[2757] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1ACuLL:
      v5 |= v6[2758] & 7;
      v16 = v6[2758] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1ADuLL:
      v5 |= v6[2759] & 7;
      v16 = v6[2759] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1AEuLL:
      v5 |= v6[2760] & 7;
      v16 = v6[2760] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1AFuLL:
      v5 |= v6[2761] & 7;
      v16 = v6[2761] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1B0uLL:
      v5 |= v6[2762] & 7;
      v16 = v6[2762] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1B1uLL:
      v5 |= v6[2763] & 7;
      v16 = v6[2763] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1B2uLL:
      v5 |= v6[2764] & 7;
      v16 = v6[2764] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1B3uLL:
      v5 |= v6[2765] & 7;
      v16 = v6[2765] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1B4uLL:
      v5 |= v6[2766] & 7;
      v16 = v6[2766] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1B5uLL:
      v5 |= v6[2767] & 7;
      v16 = v6[2767] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1B6uLL:
      v5 |= v6[2768] & 7;
      v16 = v6[2768] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1B7uLL:
      v5 |= v6[2769] & 7;
      v16 = v6[2769] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1B8uLL:
      v5 |= v6[2770] & 7;
      v16 = v6[2770] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1B9uLL:
      v5 |= v6[2771] & 7;
      v16 = v6[2771] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1BAuLL:
      v5 |= v6[2772] & 7;
      v16 = v6[2772] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1BBuLL:
      v5 |= v6[2773] & 7;
      v16 = v6[2773] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1BCuLL:
      v5 |= v6[2774] & 7;
      v16 = v6[2774] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1BDuLL:
      v5 |= v6[2775] & 7;
      v16 = v6[2775] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1BEuLL:
      v5 |= v6[2776] & 7;
      v16 = v6[2776] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1BFuLL:
      v5 |= v6[2777] & 7;
      v16 = v6[2777] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1C0uLL:
      v5 |= v6[2778] & 7;
      v16 = v6[2778] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1C1uLL:
      v5 |= v6[2779] & 7;
      v16 = v6[2779] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1C2uLL:
      v5 |= v6[2780] & 7;
      v16 = v6[2780] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1C3uLL:
      v5 |= v6[2781] & 7;
      v16 = v6[2781] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1C4uLL:
      v5 |= v6[2782] & 7;
      v16 = v6[2782] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1C5uLL:
      v5 |= v6[2783] & 7;
      v16 = v6[2783] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1C6uLL:
      v5 |= v6[2784] & 7;
      v16 = v6[2784] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1C7uLL:
      v5 |= v6[2785] & 7;
      v16 = v6[2785] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1C8uLL:
      v5 |= v6[2786] & 7;
      v16 = v6[2786] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1C9uLL:
      v5 |= v6[2787] & 7;
      v16 = v6[2787] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1CAuLL:
      v5 |= v6[2788] & 7;
      v16 = v6[2788] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1CBuLL:
      v5 |= v6[2789] & 7;
      v16 = v6[2789] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1CCuLL:
      v5 |= v6[2790] & 7;
      v16 = v6[2790] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1CDuLL:
      v5 |= v6[2791] & 7;
      v16 = v6[2791] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1CEuLL:
      v5 |= v6[2792] & 7;
      v16 = v6[2792] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1CFuLL:
      v5 |= v6[2793] & 7;
      v16 = v6[2793] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1D0uLL:
      v5 |= v6[2794] & 7;
      v16 = v6[2794] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1D1uLL:
      v5 |= v6[2795] & 7;
      v16 = v6[2795] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1D2uLL:
      v5 |= v6[2796] & 7;
      v16 = v6[2796] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1D3uLL:
      v5 |= v6[2797] & 7;
      v16 = v6[2797] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1D4uLL:
      v5 |= v6[2798] & 7;
      v16 = v6[2798] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1D5uLL:
      v5 |= v6[2799] & 7;
      v16 = v6[2799] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1D6uLL:
      v5 |= v6[2800] & 7;
      v16 = v6[2800] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1D7uLL:
      v5 |= v6[2801] & 7;
      v16 = v6[2801] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1D8uLL:
      v5 |= v6[2802] & 7;
      v16 = v6[2802] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1D9uLL:
      v5 |= v6[2803] & 7;
      v16 = v6[2803] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1DAuLL:
      v5 |= v6[2804] & 7;
      v16 = v6[2804] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1DBuLL:
      v5 |= v6[2805] & 7;
      v16 = v6[2805] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1DCuLL:
      v5 |= v6[2806] & 7;
      v16 = v6[2806] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1DDuLL:
      v5 |= v6[2807] & 7;
      v16 = v6[2807] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1DEuLL:
      v5 |= v6[2808] & 7;
      v16 = v6[2808] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1DFuLL:
      v5 |= v6[2809] & 7;
      v16 = v6[2809] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1E0uLL:
      v5 |= v6[2810] & 7;
      v16 = v6[2810] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1E1uLL:
      v5 |= v6[2811] & 7;
      v16 = v6[2811] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1E2uLL:
      v5 |= v6[2812] & 7;
      v16 = v6[2812] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1E3uLL:
      v5 |= v6[2813] & 7;
      v16 = v6[2813] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1E4uLL:
      v5 |= v6[2814] & 7;
      v16 = v6[2814] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1E5uLL:
      v5 |= v6[2815] & 7;
      v16 = v6[2815] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1E6uLL:
      v5 |= v6[2816] & 7;
      v16 = v6[2816] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1E7uLL:
      v5 |= v6[2817] & 7;
      v16 = v6[2817] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1E8uLL:
      v5 |= v6[2818] & 7;
      v16 = v6[2818] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1E9uLL:
      v5 |= v6[2819] & 7;
      v16 = v6[2819] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1EAuLL:
      v5 |= v6[2820] & 7;
      v16 = v6[2820] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1EBuLL:
      v5 |= v6[2821] & 7;
      v16 = v6[2821] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1ECuLL:
      v5 |= v6[2822] & 7;
      v16 = v6[2822] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1EDuLL:
      v5 |= v6[2823] & 7;
      v16 = v6[2823] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1EEuLL:
      v5 |= v6[2824] & 7;
      v16 = v6[2824] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1EFuLL:
      v5 |= v6[2825] & 7;
      v16 = v6[2825] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1F0uLL:
      v5 |= v6[2826] & 7;
      v16 = v6[2826] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1F1uLL:
      v5 |= v6[2827] & 7;
      v16 = v6[2827] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1F2uLL:
      v5 |= v6[2828] & 7;
      v16 = v6[2828] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1F3uLL:
      v5 |= v6[2829] & 7;
      v16 = v6[2829] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1F4uLL:
      v5 |= v6[2830] & 7;
      v16 = v6[2830] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1F5uLL:
      v5 |= v6[2831] & 7;
      v16 = v6[2831] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1F6uLL:
      v5 |= v6[2832] & 7;
      v16 = v6[2832] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1F7uLL:
      v5 |= v6[2833] & 7;
      v16 = v6[2833] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1F8uLL:
      v5 |= v6[2834] & 7;
      v16 = v6[2834] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1F9uLL:
      v5 |= v6[2835] & 7;
      v16 = v6[2835] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1FAuLL:
      v5 |= v6[2836] & 7;
      v16 = v6[2836] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1FBuLL:
      v5 |= v6[2837] & 7;
      v16 = v6[2837] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1FCuLL:
      v5 |= v6[2838] & 7;
      v16 = v6[2838] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1FDuLL:
      v5 |= v6[2839] & 7;
      v16 = v6[2839] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    case 0x1FEuLL:
      v5 |= v6[2387] & 7;
      v16 = v6[2387] & 0xFFFFFFFFFFFFFFF8LL;
      break;
    default:
      v16 = 0;
      break;
  }
  return v16 | v5;
}
