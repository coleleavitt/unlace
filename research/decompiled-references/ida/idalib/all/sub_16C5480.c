__int64 __fastcall sub_16C5480(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __m128 a6, double a7)
{
  __int64 result; // rax
  _QWORD *v8; // rdi
  _QWORD *v9; // rdi
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  char v16; // al
  __int64 v17; // r8
  __int64 v18; // rcx
  char v19; // al
  __int64 v20; // r8
  __int64 v21; // rcx
  char v22; // al
  char v23; // al

  switch ( *(_DWORD *)(a2 + 248) )
  {
    case 1:
    case 2:
    case 0x23:
    case 0x24:
      result = sub_164CE90(*(__int64 **)(a1 + 632), a2, a3, a4, a6, a7);
      break;
    case 3:
    case 4:
    case 5:
      result = sub_164CC80(*(__int64 **)(a1 + 632), a2, a3, a4, a6, a7);
      break;
    case 8:
    case 9:
      result = sub_1688390(*(_QWORD **)(a1 + 648), a3, a4, *(double *)a6.m128_u64);
      break;
    case 0xB:
      result = 0;
      break;
    case 0xC:
      result = sub_1A0A100(*(_QWORD *)(a1 + 688), (unsigned int)a3, a4);
      break;
    case 0xD:
    case 0xE:
      v8 = *(_QWORD **)(a1 + 696);
      switch ( (int)a3 )
      {
        case 1499:
        case 1500:
          if ( (unsigned __int8)sub_16D5460(*v8, a4, 0, 0, 31, 1) )
            goto LABEL_46;
          goto LABEL_26;
        case 1501:
        case 1502:
        case 1505:
        case 1506:
          v11 = 0x7FFF;
          v12 = 0;
          v13 = 0;
          goto LABEL_21;
        case 1503:
        case 1504:
          v11 = 3;
          v12 = 0;
          v13 = 0;
          goto LABEL_21;
        case 1507:
        case 1508:
        case 1509:
        case 1510:
        case 1511:
        case 1512:
        case 1513:
        case 1514:
        case 1515:
        case 1516:
        case 1517:
        case 1524:
        case 1525:
        case 1526:
        case 1527:
        case 1528:
        case 1529:
        case 1530:
        case 1531:
        case 1534:
        case 1535:
        case 1536:
        case 1537:
        case 1538:
        case 1539:
        case 1540:
        case 1541:
        case 1542:
        case 1543:
        case 1544:
        case 1545:
        case 1546:
        case 1547:
        case 1556:
        case 1557:
        case 1558:
        case 1559:
        case 1560:
        case 1561:
        case 1562:
        case 1563:
        case 1564:
        case 1565:
        case 1566:
        case 1567:
        case 1568:
        case 1569:
        case 1570:
        case 1571:
        case 1572:
        case 1573:
        case 1574:
        case 1575:
        case 1576:
        case 1577:
        case 1578:
        case 1579:
        case 1580:
        case 1581:
        case 1582:
        case 1583:
        case 1584:
        case 1585:
        case 1586:
        case 1587:
        case 1588:
        case 1589:
        case 1590:
        case 1591:
        case 1592:
        case 1593:
        case 1594:
        case 1595:
        case 1596:
        case 1597:
        case 1598:
        case 1599:
        case 1600:
        case 1601:
        case 1602:
        case 1603:
        case 1604:
        case 1605:
        case 1606:
        case 1607:
        case 1608:
        case 1609:
        case 1610:
        case 1611:
        case 1612:
        case 1613:
        case 1614:
        case 1615:
        case 1616:
        case 1617:
        case 1618:
        case 1619:
        case 1620:
        case 1621:
        case 1622:
        case 1623:
        case 1624:
        case 1625:
        case 1626:
        case 1627:
        case 1628:
        case 1629:
        case 1630:
        case 1631:
        case 1632:
        case 1633:
        case 1634:
        case 1635:
        case 1636:
        case 1637:
        case 1638:
        case 1639:
        case 1640:
        case 1641:
        case 1642:
        case 1643:
        case 1644:
        case 1645:
        case 1646:
        case 1647:
        case 1648:
        case 1649:
        case 1650:
        case 1651:
        case 1652:
        case 1653:
        case 1654:
        case 1655:
        case 1656:
        case 1657:
        case 1658:
        case 1659:
        case 1660:
        case 1661:
        case 1662:
        case 1663:
        case 1668:
        case 1669:
        case 1670:
        case 1671:
        case 1676:
        case 1677:
        case 1678:
        case 1679:
        case 1684:
        case 1685:
        case 1686:
        case 1687:
        case 1692:
        case 1693:
        case 1694:
        case 1695:
        case 1696:
        case 1697:
        case 1698:
        case 1699:
        case 1700:
        case 1701:
        case 1702:
        case 1703:
        case 1704:
        case 1705:
        case 1706:
        case 1707:
        case 1708:
        case 1709:
        case 1710:
        case 1711:
        case 1712:
        case 1713:
        case 1714:
        case 1715:
        case 1716:
        case 1717:
        case 1718:
        case 1719:
        case 1720:
        case 1721:
        case 1722:
        case 1723:
        case 1724:
        case 1725:
        case 1726:
        case 1727:
        case 1728:
        case 1729:
        case 1730:
        case 1731:
        case 1732:
        case 1733:
        case 1734:
        case 1735:
        case 1736:
        case 1737:
        case 1738:
        case 1739:
        case 1740:
        case 1741:
        case 1742:
        case 1743:
        case 1744:
        case 1745:
        case 1746:
        case 1747:
        case 1748:
        case 1749:
        case 1750:
        case 1751:
        case 1752:
        case 1753:
        case 1754:
        case 1755:
        case 1756:
        case 1757:
        case 1758:
        case 1759:
        case 1760:
        case 1761:
        case 1762:
        case 1763:
        case 1764:
        case 1765:
        case 1766:
        case 1767:
        case 1768:
        case 1769:
        case 1770:
        case 1771:
        case 1772:
        case 1773:
        case 1774:
        case 1775:
        case 1784:
        case 1785:
        case 1786:
        case 1787:
        case 1788:
        case 1789:
        case 1790:
        case 1791:
        case 1792:
        case 1793:
        case 1794:
        case 1795:
        case 1796:
        case 1797:
        case 1798:
        case 1799:
        case 1800:
        case 1801:
        case 1807:
        case 1808:
        case 1809:
        case 1810:
        case 1811:
        case 1812:
        case 1817:
        case 1818:
        case 1819:
        case 1820:
        case 1825:
        case 1826:
        case 1827:
        case 1828:
        case 1833:
        case 1834:
        case 1835:
        case 1836:
        case 1841:
        case 1842:
        case 1843:
        case 1844:
        case 1852:
        case 1856:
        case 1857:
        case 1858:
        case 1859:
        case 1860:
        case 1865:
        case 1866:
        case 1867:
        case 1868:
        case 1873:
        case 1874:
        case 1875:
        case 1876:
        case 1877:
        case 1878:
        case 1887:
        case 1888:
        case 1889:
        case 1890:
        case 1891:
        case 1892:
        case 1901:
        case 1902:
        case 1903:
        case 1904:
        case 1905:
        case 1906:
        case 1907:
        case 1908:
        case 1909:
        case 1910:
        case 1911:
        case 1912:
        case 1929:
        case 1930:
        case 1931:
        case 1932:
        case 1933:
        case 1934:
        case 1935:
        case 1936:
        case 1937:
        case 1938:
        case 1939:
        case 1940:
        case 1957:
        case 1958:
        case 1959:
        case 1960:
        case 1961:
        case 1962:
        case 1963:
        case 1964:
        case 1965:
        case 1966:
        case 1967:
        case 1968:
        case 1969:
        case 1970:
        case 1971:
        case 1972:
        case 1977:
        case 1978:
        case 1979:
        case 1980:
        case 1985:
        case 1986:
        case 1987:
        case 1988:
        case 1993:
        case 1994:
        case 1997:
        case 1998:
        case 1999:
        case 2000:
        case 2001:
        case 2002:
        case 2003:
        case 2004:
        case 2005:
        case 2006:
        case 2007:
        case 2008:
        case 2009:
        case 2010:
        case 2011:
        case 2012:
        case 2013:
        case 2014:
        case 2015:
        case 2016:
        case 2017:
        case 2018:
        case 2019:
        case 2020:
        case 2021:
        case 2022:
        case 2023:
        case 2024:
        case 2025:
        case 2026:
        case 2027:
        case 2028:
        case 2029:
        case 2030:
        case 2031:
        case 2032:
        case 2033:
        case 2034:
        case 2035:
        case 2036:
        case 2037:
        case 2038:
        case 2039:
        case 2040:
        case 2041:
        case 2042:
        case 2043:
        case 2044:
        case 2045:
        case 2046:
        case 2047:
        case 2048:
        case 2049:
        case 2050:
        case 2051:
        case 2052:
        case 2053:
        case 2054:
        case 2055:
        case 2056:
        case 2057:
        case 2058:
        case 2059:
        case 2060:
        case 2061:
        case 2062:
        case 2063:
        case 2064:
        case 2065:
        case 2066:
        case 2067:
        case 2068:
        case 2069:
        case 2070:
        case 2071:
        case 2072:
        case 2073:
        case 2074:
        case 2075:
        case 2076:
        case 2077:
        case 2078:
        case 2079:
        case 2080:
        case 2081:
        case 2082:
        case 2083:
        case 2084:
        case 2085:
        case 2086:
        case 2087:
        case 2088:
        case 2089:
        case 2090:
        case 2095:
        case 2096:
        case 2097:
        case 2098:
        case 2103:
        case 2104:
        case 2105:
        case 2106:
        case 2111:
        case 2112:
        case 2113:
        case 2114:
        case 2119:
        case 2120:
        case 2121:
        case 2122:
        case 2127:
        case 2128:
        case 2129:
        case 2130:
        case 2131:
        case 2132:
        case 2133:
        case 2134:
        case 2135:
        case 2136:
        case 2137:
        case 2138:
        case 2139:
        case 2140:
        case 2141:
        case 2142:
        case 2143:
        case 2144:
        case 2145:
        case 2146:
        case 2147:
        case 2148:
        case 2149:
        case 2150:
        case 2151:
        case 2152:
        case 2153:
        case 2154:
        case 2155:
        case 2156:
        case 2157:
        case 2158:
        case 2159:
        case 2160:
        case 2161:
        case 2162:
        case 2163:
        case 2164:
        case 2165:
        case 2166:
        case 2167:
        case 2168:
        case 2169:
        case 2170:
        case 2171:
        case 2173:
        case 2174:
        case 2175:
        case 2176:
        case 2189:
        case 2190:
        case 2191:
        case 2192:
        case 2199:
        case 2200:
        case 2201:
        case 2202:
        case 2203:
        case 2204:
        case 2205:
        case 2206:
        case 2207:
        case 2208:
        case 2209:
        case 2210:
        case 2211:
        case 2212:
        case 2213:
        case 2214:
        case 2215:
        case 2216:
        case 2217:
        case 2218:
        case 2219:
        case 2220:
        case 2221:
        case 2222:
        case 2223:
        case 2224:
        case 2225:
        case 2226:
        case 2238:
        case 2239:
        case 2248:
        case 2249:
        case 2250:
        case 2251:
        case 2252:
        case 2253:
        case 2254:
        case 2255:
        case 2256:
        case 2257:
        case 2258:
        case 2259:
        case 2260:
        case 2261:
        case 2262:
        case 2263:
        case 2264:
        case 2265:
        case 2266:
        case 2267:
        case 2276:
        case 2277:
        case 2278:
        case 2279:
        case 2280:
        case 2281:
        case 2282:
        case 2283:
        case 2284:
        case 2285:
        case 2286:
        case 2287:
        case 2288:
        case 2289:
        case 2290:
        case 2291:
        case 2292:
        case 2293:
        case 2294:
        case 2295:
        case 2296:
        case 2297:
        case 2298:
        case 2299:
        case 2300:
        case 2301:
        case 2302:
        case 2303:
        case 2304:
        case 2305:
        case 2306:
        case 2307:
        case 2308:
        case 2309:
        case 2310:
        case 2311:
        case 2312:
        case 2313:
        case 2314:
        case 2315:
        case 2316:
        case 2317:
        case 2318:
        case 2319:
        case 2320:
        case 2321:
        case 2322:
        case 2323:
        case 2324:
        case 2325:
        case 2326:
        case 2327:
        case 2328:
        case 2329:
        case 2330:
        case 2331:
        case 2332:
        case 2333:
        case 2334:
        case 2335:
        case 2336:
        case 2337:
        case 2338:
        case 2339:
        case 2340:
        case 2341:
        case 2342:
        case 2343:
        case 2344:
        case 2345:
        case 2346:
        case 2347:
        case 2348:
        case 2349:
        case 2350:
        case 2351:
        case 2352:
        case 2353:
        case 2354:
        case 2355:
        case 2356:
        case 2357:
        case 2358:
        case 2359:
        case 2360:
        case 2361:
        case 2362:
        case 2363:
        case 2364:
        case 2365:
        case 2366:
        case 2367:
        case 2368:
        case 2369:
        case 2370:
        case 2371:
        case 2372:
        case 2373:
        case 2374:
        case 2375:
        case 2376:
        case 2377:
        case 2378:
        case 2379:
        case 2380:
        case 2381:
        case 2382:
        case 2383:
        case 2388:
        case 2389:
        case 2390:
        case 2391:
        case 2396:
        case 2397:
        case 2398:
        case 2399:
        case 2404:
        case 2405:
        case 2406:
        case 2407:
        case 2412:
        case 2413:
        case 2414:
        case 2415:
        case 2416:
        case 2417:
        case 2418:
        case 2419:
        case 2420:
        case 2421:
        case 2422:
        case 2423:
        case 2424:
        case 2425:
        case 2426:
        case 2427:
        case 2428:
        case 2429:
        case 2430:
        case 2431:
        case 2432:
        case 2433:
        case 2434:
        case 2435:
        case 2436:
        case 2437:
        case 2438:
        case 2439:
        case 2440:
        case 2441:
        case 2442:
        case 2443:
        case 2444:
        case 2445:
        case 2446:
        case 2447:
        case 2448:
        case 2449:
        case 2450:
        case 2451:
        case 2452:
        case 2453:
        case 2454:
        case 2455:
        case 2456:
        case 2457:
        case 2458:
        case 2459:
        case 2460:
        case 2461:
        case 2462:
        case 2463:
        case 2464:
        case 2465:
        case 2466:
        case 2467:
        case 2468:
        case 2469:
        case 2470:
        case 2471:
        case 2472:
        case 2473:
        case 2474:
        case 2475:
        case 2476:
        case 2477:
        case 2478:
        case 2479:
        case 2480:
        case 2481:
        case 2482:
        case 2483:
        case 2484:
        case 2485:
        case 2486:
        case 2487:
        case 2488:
        case 2489:
        case 2490:
        case 2491:
        case 2492:
        case 2493:
        case 2494:
        case 2495:
        case 2504:
        case 2505:
        case 2506:
        case 2507:
        case 2508:
        case 2509:
        case 2510:
        case 2511:
        case 2512:
        case 2513:
        case 2514:
        case 2515:
        case 2516:
        case 2517:
        case 2518:
        case 2519:
        case 2520:
        case 2521:
        case 2522:
        case 2523:
        case 2524:
        case 2525:
        case 2526:
        case 2527:
        case 2528:
        case 2529:
        case 2530:
        case 2531:
        case 2532:
        case 2533:
        case 2539:
        case 2540:
        case 2541:
        case 2542:
        case 2543:
        case 2544:
        case 2549:
        case 2550:
        case 2551:
        case 2552:
        case 2557:
        case 2558:
        case 2559:
        case 2560:
        case 2565:
        case 2566:
        case 2567:
        case 2568:
        case 2573:
        case 2574:
        case 2575:
        case 2576:
        case 2584:
        case 2588:
        case 2589:
        case 2590:
        case 2591:
        case 2592:
        case 2597:
        case 2598:
        case 2599:
        case 2600:
        case 2605:
        case 2606:
        case 2607:
        case 2608:
        case 2609:
        case 2610:
        case 2619:
        case 2620:
        case 2621:
        case 2622:
        case 2623:
        case 2624:
        case 2633:
        case 2634:
        case 2635:
        case 2636:
        case 2637:
        case 2638:
        case 2639:
        case 2640:
        case 2641:
        case 2642:
        case 2643:
        case 2644:
        case 2661:
        case 2662:
        case 2663:
        case 2664:
        case 2665:
        case 2666:
        case 2667:
        case 2668:
        case 2669:
        case 2670:
        case 2671:
        case 2672:
        case 2689:
        case 2690:
        case 2691:
        case 2692:
        case 2693:
        case 2694:
        case 2695:
        case 2696:
        case 2697:
        case 2698:
        case 2699:
        case 2700:
        case 2701:
        case 2702:
        case 2703:
        case 2704:
        case 2709:
        case 2710:
        case 2711:
        case 2712:
        case 2717:
        case 2718:
        case 2719:
        case 2720:
        case 2725:
        case 2726:
        case 2729:
        case 2730:
        case 2731:
        case 2732:
        case 2733:
        case 2734:
        case 2735:
        case 2736:
        case 2737:
        case 2738:
        case 2739:
        case 2740:
        case 2741:
        case 2742:
        case 2743:
        case 2744:
        case 2745:
        case 2746:
        case 2747:
        case 2748:
        case 2749:
        case 2750:
        case 2751:
        case 2752:
        case 2753:
        case 2754:
        case 2755:
        case 2756:
        case 2757:
        case 2758:
        case 2759:
        case 2760:
        case 2761:
        case 2762:
        case 2763:
        case 2764:
        case 2765:
        case 2766:
        case 2767:
        case 2768:
        case 2769:
        case 2770:
        case 2771:
        case 2772:
        case 2773:
        case 2774:
        case 2775:
        case 2776:
        case 2777:
        case 2778:
        case 2779:
        case 2780:
        case 2781:
        case 2782:
        case 2783:
        case 2784:
        case 2785:
        case 2786:
        case 2787:
        case 2788:
        case 2789:
        case 2790:
        case 2791:
        case 2792:
        case 2793:
        case 2794:
        case 2795:
        case 2796:
        case 2797:
        case 2798:
        case 2799:
        case 2800:
        case 2801:
        case 2802:
        case 2803:
        case 2804:
        case 2805:
        case 2806:
        case 2807:
        case 2808:
        case 2809:
        case 2810:
        case 2811:
        case 2812:
        case 2813:
        case 2814:
        case 2815:
        case 2816:
        case 2817:
        case 2818:
        case 2819:
        case 2820:
        case 2821:
        case 2822:
        case 2827:
        case 2828:
        case 2829:
        case 2830:
        case 2835:
        case 2836:
        case 2837:
        case 2838:
        case 2843:
        case 2844:
        case 2845:
        case 2846:
        case 2851:
        case 2852:
        case 2853:
        case 2854:
        case 2859:
        case 2860:
        case 2861:
        case 2862:
        case 2863:
        case 2864:
        case 2865:
        case 2866:
        case 2867:
        case 2868:
        case 2869:
        case 2870:
        case 2871:
        case 2872:
        case 2873:
        case 2874:
        case 2875:
        case 2876:
        case 2877:
        case 2878:
        case 2879:
        case 2880:
        case 2881:
        case 2882:
        case 2883:
        case 2884:
        case 2885:
        case 2886:
        case 2887:
        case 2888:
        case 2889:
        case 2890:
        case 2891:
        case 2892:
        case 2893:
        case 2894:
        case 2895:
        case 2896:
        case 2897:
        case 2898:
        case 2899:
        case 2900:
        case 2901:
        case 2902:
        case 2903:
        case 2905:
        case 2906:
        case 2907:
        case 2908:
        case 2915:
        case 2916:
        case 2917:
        case 2918:
        case 2923:
        case 2924:
        case 2925:
        case 2926:
        case 2927:
        case 2936:
        case 2937:
        case 2938:
        case 2939:
        case 2940:
        case 2941:
        case 2942:
        case 2943:
        case 2944:
        case 2945:
        case 2946:
        case 2947:
        case 2948:
        case 2949:
        case 2950:
        case 2951:
        case 2952:
        case 2953:
        case 2954:
        case 2955:
        case 2956:
        case 2957:
        case 2958:
        case 2959:
        case 2960:
        case 2961:
        case 2962:
        case 2963:
        case 2964:
        case 2978:
        case 2979:
          return 0;
        case 1518:
        case 1519:
          v11 = 0x3FFF;
          v12 = 0;
          v13 = 0;
          goto LABEL_21;
        case 1520:
        case 1521:
          v11 = 0x3FFF;
          v12 = 0;
          v13 = 1;
          goto LABEL_21;
        case 1522:
        case 1523:
          v11 = 0x3FFF;
          v12 = 0;
          v13 = 2;
          goto LABEL_21;
        case 1532:
        case 1533:
        case 1548:
        case 1549:
        case 1550:
        case 1551:
        case 1552:
        case 1553:
        case 1554:
        case 1555:
        case 1672:
        case 1673:
        case 1674:
        case 1675:
        case 1688:
        case 1689:
        case 1690:
        case 1691:
        case 1778:
        case 1782:
        case 1823:
        case 1831:
        case 1839:
        case 1847:
        case 1851:
        case 1855:
        case 1863:
        case 1871:
        case 1975:
        case 1983:
        case 1991:
        case 2107:
        case 2108:
        case 2109:
        case 2110:
        case 2123:
        case 2124:
        case 2125:
        case 2126:
        case 2197:
        case 2198:
        case 2268:
        case 2269:
        case 2270:
        case 2271:
        case 2272:
        case 2273:
        case 2274:
        case 2275:
        case 2392:
        case 2393:
        case 2394:
        case 2395:
        case 2408:
        case 2409:
        case 2410:
        case 2411:
        case 2498:
        case 2502:
        case 2555:
        case 2563:
        case 2571:
        case 2579:
        case 2583:
        case 2587:
        case 2595:
        case 2603:
        case 2707:
        case 2715:
        case 2723:
        case 2839:
        case 2840:
        case 2841:
        case 2842:
        case 2855:
        case 2856:
        case 2857:
        case 2858:
        case 2934:
        case 2935:
          v11 = 31;
          v12 = 0;
          v13 = 1;
          goto LABEL_21;
        case 1664:
        case 1665:
        case 1666:
        case 1667:
        case 1680:
        case 1681:
        case 1682:
        case 1683:
        case 2091:
        case 2092:
        case 2093:
        case 2094:
        case 2099:
        case 2100:
        case 2101:
        case 2102:
        case 2115:
        case 2116:
        case 2117:
        case 2118:
        case 2384:
        case 2385:
        case 2386:
        case 2387:
        case 2400:
        case 2401:
        case 2402:
        case 2403:
        case 2823:
        case 2824:
        case 2825:
        case 2826:
        case 2831:
        case 2832:
        case 2833:
        case 2834:
        case 2847:
        case 2848:
        case 2849:
        case 2850:
          v11 = 15;
          v12 = 4294967280LL;
          v13 = 1;
          goto LABEL_21;
        case 1776:
        case 1780:
        case 1821:
        case 1829:
        case 1837:
        case 1845:
        case 1849:
        case 1853:
        case 1861:
        case 1869:
        case 1973:
        case 1981:
        case 1989:
        case 2182:
        case 2186:
        case 2194:
        case 2496:
        case 2500:
        case 2553:
        case 2561:
        case 2569:
        case 2577:
        case 2581:
        case 2585:
        case 2593:
        case 2601:
        case 2705:
        case 2713:
        case 2721:
        case 2911:
        case 2913:
        case 2920:
        case 2930:
        case 2932:
          v11 = 7;
          v12 = 0;
          v13 = 1;
          goto LABEL_21;
        case 1777:
        case 1781:
        case 1822:
        case 1830:
        case 1838:
        case 1846:
        case 1850:
        case 1854:
        case 1862:
        case 1870:
        case 1974:
        case 1982:
        case 1990:
        case 2181:
        case 2185:
        case 2193:
        case 2497:
        case 2501:
        case 2554:
        case 2562:
        case 2570:
        case 2578:
        case 2582:
        case 2586:
        case 2594:
        case 2602:
        case 2706:
        case 2714:
        case 2722:
        case 2919:
          v11 = 15;
          v12 = 0;
          v13 = 1;
          goto LABEL_21;
        case 1779:
        case 1783:
        case 1824:
        case 1832:
        case 1840:
        case 1848:
        case 1864:
        case 1872:
        case 1976:
        case 1984:
        case 1992:
        case 2499:
        case 2503:
        case 2556:
        case 2564:
        case 2572:
        case 2580:
        case 2596:
        case 2604:
        case 2708:
        case 2716:
        case 2724:
          v11 = 63;
          v12 = 0;
          v13 = 1;
          goto LABEL_21;
        case 1802:
        case 2534:
          v11 = 4095;
          v12 = 4294963200LL;
          v13 = 0;
          goto LABEL_21;
        case 1803:
        case 1804:
        case 1805:
        case 1806:
        case 2535:
        case 2536:
        case 2537:
        case 2538:
          v11 = 511;
          v12 = 4294966784LL;
          v13 = 0;
          goto LABEL_21;
        case 1813:
        case 1814:
        case 1815:
        case 1816:
        case 2227:
        case 2228:
        case 2229:
        case 2545:
        case 2546:
        case 2547:
        case 2548:
        case 2965:
        case 2966:
        case 2967:
        case 2970:
          v11 = 255;
          v12 = 0;
          v13 = 1;
          goto LABEL_21;
        case 1879:
        case 1883:
        case 1893:
        case 1897:
        case 1913:
        case 1917:
        case 1921:
        case 1925:
        case 1941:
        case 1945:
        case 1949:
        case 1953:
        case 2177:
        case 2611:
        case 2615:
        case 2625:
        case 2629:
        case 2645:
        case 2649:
        case 2653:
        case 2657:
        case 2673:
        case 2677:
        case 2681:
        case 2685:
          v11 = 15;
          v12 = 0;
          v13 = 2;
          goto LABEL_21;
        case 1880:
        case 1884:
        case 1894:
        case 1898:
        case 1914:
        case 1918:
        case 1922:
        case 1926:
        case 1942:
        case 1946:
        case 1950:
        case 1954:
        case 1995:
        case 1996:
        case 2612:
        case 2616:
        case 2626:
        case 2630:
        case 2646:
        case 2650:
        case 2654:
        case 2658:
        case 2674:
        case 2678:
        case 2682:
        case 2686:
        case 2727:
        case 2728:
          v11 = 31;
          v12 = 0;
          v13 = 2;
          goto LABEL_21;
        case 1881:
        case 1885:
        case 1895:
        case 1899:
        case 1915:
        case 1919:
        case 1923:
        case 1927:
        case 1943:
        case 1947:
        case 1951:
        case 1955:
        case 2613:
        case 2617:
        case 2627:
        case 2631:
        case 2647:
        case 2651:
        case 2655:
        case 2659:
        case 2675:
        case 2679:
        case 2683:
        case 2687:
          v11 = 63;
          v12 = 0;
          v13 = 2;
          goto LABEL_21;
        case 1882:
        case 1886:
        case 1896:
        case 1900:
        case 1916:
        case 1920:
        case 1924:
        case 1928:
        case 1944:
        case 1948:
        case 1952:
        case 1956:
        case 2614:
        case 2618:
        case 2628:
        case 2632:
        case 2648:
        case 2652:
        case 2656:
        case 2660:
        case 2676:
        case 2680:
        case 2684:
        case 2688:
          v11 = 127;
          v12 = 0;
          v13 = 2;
          goto LABEL_21;
        case 2172:
        case 2230:
        case 2231:
        case 2232:
        case 2233:
        case 2234:
        case 2235:
        case 2904:
        case 2968:
        case 2969:
        case 2971:
        case 2972:
        case 2973:
        case 2974:
        case 2975:
          v11 = 255;
          v12 = 0;
          v13 = 2;
          goto LABEL_21;
        case 2178:
        case 2909:
        case 2928:
          v11 = 7;
          v12 = 0;
          v13 = 2;
          goto LABEL_21;
        case 2179:
        case 2910:
        case 2929:
          v11 = 3;
          v12 = 0;
          v13 = 2;
          goto LABEL_21;
        case 2180:
          v11 = 1;
          v12 = 0;
          v13 = 2;
          goto LABEL_21;
        case 2183:
        case 2187:
        case 2195:
        case 2912:
        case 2914:
        case 2921:
        case 2931:
        case 2933:
          v11 = 3;
          v12 = 0;
          v13 = 1;
          goto LABEL_21;
        case 2184:
        case 2188:
        case 2196:
        case 2922:
          v11 = 1;
          v12 = 0;
          v13 = 1;
          goto LABEL_21;
        case 2236:
        case 2240:
        case 2976:
        case 2980:
          v11 = 2047;
          v12 = 4294965248LL;
          v13 = 1;
          goto LABEL_21;
        case 2237:
        case 2977:
LABEL_26:
          v11 = 2047;
          v12 = 4294965248LL;
          v13 = 2;
          goto LABEL_21;
        case 2241:
        case 2981:
          v11 = 2046;
          v12 = 4294965248LL;
          v13 = 1;
          goto LABEL_21;
        case 2242:
        case 2982:
          v11 = 2044;
          v12 = 4294965248LL;
          v13 = 1;
          goto LABEL_21;
        case 2243:
        case 2983:
          v11 = 2040;
          v12 = 4294965248LL;
          v13 = 1;
          goto LABEL_21;
        case 2244:
          v17 = 127;
          v18 = 4294967168LL;
          goto LABEL_52;
        case 2245:
          v20 = 254;
          v21 = 4294967040LL;
          goto LABEL_55;
        case 2246:
          v14 = 508;
          v15 = 4294966784LL;
          goto LABEL_45;
        case 2247:
          v23 = sub_16D5460(*v8, a4, 2, 4294966272LL, 1016, 1);
          v11 = 1;
          if ( !v23 )
            goto LABEL_50;
          goto LABEL_46;
        case 2984:
          v16 = sub_16D5460(*v8, a4, 2, 4294967168LL, 127, 1);
          v11 = 31;
          if ( !v16 )
            goto LABEL_50;
          goto LABEL_46;
        case 2985:
          v17 = 254;
          v18 = 4294967040LL;
LABEL_52:
          v19 = sub_16D5460(*v8, a4, 2, v18, v17, 1);
          v11 = 15;
          if ( !v19 )
            goto LABEL_50;
          goto LABEL_46;
        case 2986:
          v20 = 508;
          v21 = 4294966784LL;
LABEL_55:
          v22 = sub_16D5460(*v8, a4, 2, v21, v20, 1);
          v11 = 7;
          if ( !v22 )
            goto LABEL_50;
          goto LABEL_46;
        case 2987:
          v14 = 1016;
          v15 = 4294966272LL;
LABEL_45:
          if ( (unsigned __int8)sub_16D5460(*v8, a4, 2, v15, v14, 1) )
          {
LABEL_46:
            result = 1;
          }
          else
          {
            v11 = 3;
LABEL_50:
            v12 = 0;
            v13 = 3;
LABEL_21:
            result = sub_16D5460(*v8, a4, v13, v12, v11, 1);
          }
          break;
        default:
          result = 0;
          break;
      }
      break;
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
      result = sub_1A71260(*(_QWORD *)(a1 + 712), a2, a3, a4, a5, (unsigned int)a3);
      break;
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
      result = sub_1C13110(*(_QWORD *)(a1 + 768), a2, a3, a4, a5, (unsigned int)a3);
      break;
    case 0x1A:
      result = sub_16115F0(*(__int64 **)(a1 + 624), a3, a4);
      break;
    case 0x1B:
    case 0x1C:
      result = sub_1C29650(*(_QWORD *)(a1 + 784), a2, a3, a4, a5, (unsigned int)a3);
      break;
    case 0x20:
      result = sub_1CAE360(*(_QWORD *)(a1 + 816), (unsigned int)a3, a4);
      break;
    case 0x25:
    case 0x26:
      result = sub_1EA5680(*(_QWORD *)(a1 + 832), a2, a3, a4, a5, (unsigned int)a3);
      break;
    case 0x29:
    case 0x2A:
      v9 = *(_QWORD **)(a1 + 728);
      if ( (unsigned int)(a3 - 1746) <= 3 )
        result = sub_16EF380(*v9, a4, 3);
      else
        result = 0;
      break;
    case 0x31:
    case 0x32:
    case 0x33:
      if ( *(_DWORD *)(a2 + 260) == 23 )
        goto LABEL_16;
      result = sub_1C6F100(*(_QWORD *)(a1 + 792), a2, a3, a4, a5, (unsigned int)a3);
      break;
    case 0x37:
    case 0x38:
      result = sub_1E9DF10(*(_QWORD *)(a1 + 824), a2, a3, a4, a5, (unsigned int)a3);
      break;
    default:
LABEL_16:
      result = 0;
      break;
  }
  return result;
}
